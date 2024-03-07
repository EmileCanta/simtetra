#ifdef __CLING__
#pragma cling optimize(0)
#endif
void th+hp()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Mar  6 16:29:53 2024) by ROOT version 6.30/02
   TCanvas *c1 = new TCanvas("c1", "c1",10,53,700,521);
   c1->ToggleEventStatus();
   c1->Range(-0.8187501,-10.78125,5.91875,72.68125);
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
   Double_t Graph_fy1[50] = { 55.6, 60.1, 61.3, 60.1, 58.5, 58.5, 57.4, 58.2, 59.6, 56.9, 57.8, 59.2, 57.6, 58.3, 56.8, 56.7, 53.8,
   55.1, 54.2, 56.6, 54.7, 55.3, 54.1, 51.4, 53.3, 53.7, 52.1, 49.7, 54.6, 48.2, 51.4, 52.9, 48,
   50.3, 52.2, 51.5, 50.1, 51, 50.1, 44.9, 49.3, 49.1, 45.2, 43.9, 46.1, 47.8, 42.2, 45, 45.5,
   43.2 };
   TGraph *graph = new TGraph(50,Graph_fx1,Graph_fy1);
   graph->SetName("");
   graph->SetTitle("EffTot");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","EffTot",100,0,5.49);
   Graph_Graph1->SetMinimum(40.29);
   Graph_Graph1->SetMaximum(63.21);
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
   Double_t Graph_fy2[50] = { 31.8, 30.8, 29.5, 25.8, 25.8, 24.5, 23, 23.8, 21.5, 21.7, 21.4, 19.2, 19.9, 19.9, 18, 19.9, 15.3,
   16.1, 15.9, 16.1, 15.9, 16.1, 13.9, 16.2, 16.7, 13.7, 12.8, 14.2, 15, 12, 13.4, 12.2, 11.8,
   12.7, 15.3, 14.2, 13.2, 10.8, 13.4, 11.7, 11.6, 12, 10.3, 9.2, 9.8, 10.2, 7.6, 9.9, 10.2,
   9.6 };
   graph = new TGraph(50,Graph_fx2,Graph_fy2);
   graph->SetName("");
   graph->SetTitle("EffR1");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","EffR1",100,0,5.49);
   Graph_Graph2->SetMinimum(5.18);
   Graph_Graph2->SetMaximum(34.22);
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
   Double_t Graph_fy3[50] = { 20.5, 23.8, 26.1, 24.9, 25.1, 23.1, 25, 23.2, 23.7, 23, 24, 24.8, 23, 23.1, 25, 21.9, 22,
   22.6, 22.2, 22.2, 20.8, 22.9, 22.4, 20.7, 19.2, 21.1, 20.9, 18.8, 20.7, 18.8, 19.3, 19.6, 17.6,
   18.8, 18.3, 21.4, 17, 18.8, 15.8, 16, 17.1, 18.5, 15.5, 16.2, 18, 16.4, 14.8, 17.3, 16.8,
   16.6 };
   graph = new TGraph(50,Graph_fx3,Graph_fy3);
   graph->SetName("");
   graph->SetTitle("EffR2");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ffff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","EffR2",100,0,5.49);
   Graph_Graph3->SetMinimum(13.67);
   Graph_Graph3->SetMaximum(27.23);
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
   Double_t Graph_fy4[50] = { 2.7, 4.1, 5, 7.4, 5, 8.9, 6.4, 7.7, 10.3, 8.8, 8.1, 11, 10.8, 10.2, 9.3, 10, 10.8,
   10.7, 10.5, 11.5, 11.1, 11.2, 11.9, 9.3, 11.2, 11.9, 11.4, 11.2, 10.8, 10, 10.3, 12.5, 10.5,
   12.2, 9.9, 10.3, 10.7, 10, 12.3, 9.1, 12.1, 10.7, 10.5, 10.4, 10.6, 11.1, 9.8, 10.1, 9.9,
   10 };
   graph = new TGraph(50,Graph_fx4,Graph_fy4);
   graph->SetName("");
   graph->SetTitle("EffR3");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","EffR3",100,0,5.49);
   Graph_Graph4->SetMinimum(1.72);
   Graph_Graph4->SetMaximum(13.48);
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
   Double_t Graph_fy5[50] = { 0.6, 1.4, 0.7, 2, 2.6, 2, 3, 3.5, 4.1, 3.4, 4.3, 4.2, 3.9, 5.1, 4.5, 4.9, 5.7,
   5.7, 5.6, 6.8, 6.9, 5.1, 5.9, 5.2, 6.2, 7, 7, 5.5, 8.1, 7.4, 8.4, 8.6, 8.1,
   6.6, 8.7, 5.6, 9.2, 11.4, 8.6, 8.1, 8.5, 7.9, 8.9, 8.1, 7.7, 10.1, 10, 7.7, 8.6,
   7 };
   graph = new TGraph(50,Graph_fx5,Graph_fy5);
   graph->SetName("");
   graph->SetTitle("EffR4");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#cccccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","EffR4",100,0,5.49);
   Graph_Graph5->SetMinimum(0.54);
   Graph_Graph5->SetMaximum(12.48);
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
   
   TLegend *leg = new TLegend(0.1014493,0.5106383,0.4014493,0.7206383,NULL,"brNDC");
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
