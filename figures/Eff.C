#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Eff()
{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Mar  7 17:19:23 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "c1",1440,53,2560,1315);
   c1->ToggleEventStatus();
   c1->Range(-0.8187501,-10.49688,5.91875,70.36688);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[50] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5 };
   Double_t Graph_fy1[50] = { 58, 58.54, 57.5, 58.76, 59.34, 58.66, 59.34, 58.6, 57.32, 58.49, 57.79, 57.92, 57.24, 57.28, 56.94, 57.23, 56.75,
   56.5, 55.44, 55.26, 54.46, 54.57, 54.1, 53.57, 54.24, 53.53, 54.64, 53.02, 52.55, 50.93, 51.65, 52.28, 51.94,
   52.3, 51.2, 52.01, 50.65, 51.24, 49.63, 49.61, 49.39, 49.37, 48.48, 47.31, 46.87, 47.82, 47.27, 45.66, 46.3,
   45.42 };
   TGraph *graph = new TGraph(50,Graph_fx1,Graph_fy1);
   graph->SetName("");
   graph->SetTitle("EffTot");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","EffTot",100,0,5.49);
   Graph_Graph1->SetMinimum(44.028);
   Graph_Graph1->SetMaximum(60.732);
   Graph_Graph1->SetDirectory(nullptr);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[50] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5 };
   Double_t Graph_fy2[50] = { 34.15, 32.45, 28.98, 28.27, 27.91, 25.97, 25.41, 24.56, 22.75, 22.7, 21.57, 20.92, 20.49, 20.06, 18.7, 19.08, 18.75,
   18.4, 18.03, 16.73, 16.62, 16.37, 15.9, 16.3, 15.68, 15.21, 15.04, 15.25, 14.5, 13.54, 14.07, 14.71, 14.12,
   14.66, 14.88, 13.47, 13.32, 13.15, 13.13, 12.67, 12.71, 12.43, 11.63, 11.29, 10.87, 11.09, 11.18, 10.31, 10.42,
   10.35 };
   graph = new TGraph(50,Graph_fx2,Graph_fy2);
   graph->SetName("");
   graph->SetTitle("EffR1");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","EffR1",100,0,5.49);
   Graph_Graph2->SetMinimum(7.926);
   Graph_Graph2->SetMaximum(36.534);
   Graph_Graph2->SetDirectory(nullptr);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[50] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5 };
   Double_t Graph_fy3[50] = { 20.51, 22.04, 23.28, 24.14, 23.51, 24.39, 24.32, 24.13, 23.4, 24.59, 24.72, 24.29, 24.25, 23, 23.68, 23.24, 23.13,
   22.55, 22, 22.11, 21.77, 21.89, 21.47, 20.42, 21.55, 19.78, 20.99, 20.58, 21.04, 19.34, 19.56, 19.67, 19.91,
   19.66, 18.95, 19.75, 19.69, 19.14, 18.01, 17.95, 17.87, 18.35, 18.08, 17.64, 16.94, 17.12, 16.95, 16.8, 16.56,
   16.24 };
   graph = new TGraph(50,Graph_fx3,Graph_fy3);
   graph->SetName("");
   graph->SetTitle("EffR2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ffff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","EffR2",100,0,5.49);
   Graph_Graph3->SetMinimum(15.392);
   Graph_Graph3->SetMaximum(25.568);
   Graph_Graph3->SetDirectory(nullptr);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx4[50] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5 };
   Double_t Graph_fy4[50] = { 2.81, 3.46, 4.32, 4.93, 6.34, 6.43, 7.17, 7.08, 8.09, 7.73, 8.08, 8.65, 8.27, 9.53, 9.54, 9.91, 9.99,
   10.06, 9.88, 10.35, 9.84, 10.12, 10.15, 10.71, 10.26, 11.31, 11.57, 10.5, 10.48, 10.54, 10.46, 10.49, 10.27,
   10.61, 10.26, 11.21, 10.59, 10.74, 10.54, 10.85, 10.8, 10.6, 10.25, 10.13, 10.84, 11.15, 10.06, 10.23, 10.68,
   10.62 };
   graph = new TGraph(50,Graph_fx4,Graph_fy4);
   graph->SetName("");
   graph->SetTitle("EffR3");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","EffR3",100,0,5.49);
   Graph_Graph4->SetMinimum(1.934);
   Graph_Graph4->SetMaximum(12.446);
   Graph_Graph4->SetDirectory(nullptr);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx5[50] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5 };
   Double_t Graph_fy5[50] = { 0.53, 0.59, 0.92, 1.42, 1.58, 1.87, 2.44, 2.83, 3.08, 3.47, 3.42, 4.06, 4.23, 4.69, 5.02, 5, 4.88,
   5.49, 5.53, 6.07, 6.23, 6.19, 6.58, 6.14, 6.75, 7.23, 7.04, 6.69, 6.53, 7.51, 7.56, 7.41, 7.64,
   7.37, 7.11, 7.58, 7.05, 8.21, 7.95, 8.14, 8.01, 7.99, 8.52, 8.25, 8.22, 8.46, 9.08, 8.32, 8.64,
   8.21 };
   graph = new TGraph(50,Graph_fx5,Graph_fy5);
   graph->SetName("");
   graph->SetTitle("EffR4");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","EffR4",100,0,5.49);
   Graph_Graph5->SetMinimum(0.477);
   Graph_Graph5->SetMaximum(9.935);
   Graph_Graph5->SetDirectory(nullptr);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetTitleOffset(1);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetTitleOffset(1);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetLimits(-0.145, 5.245);
   multigraph->GetXaxis()->SetTitle("Energy (MeV)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Efficiency (%)");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.1014493,0.5531915,0.4014493,0.7631915,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","EffTot","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","EffR1","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","EffR2","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","EffR3","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","EffR4","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#cccccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
