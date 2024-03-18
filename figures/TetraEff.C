#ifdef __CLING__
#pragma cling optimize(0)
#endif
void TetraEff()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Mar 13 10:53:28 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "c1",1440,53,2560,1316);
   c1->ToggleEventStatus();
   c1->Range(-1.75625,-8.09442,11.85625,72.84977);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[100] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5,
   6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1,
   8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7,
   9.8, 9.9, 10 };
   Double_t Graph_fy1[100] = { 60.9943, 61.3675, 61.4434, 61.6378, 61.6915, 61.7127, 61.5654, 61.3929, 61.1761, 61.0043, 60.7409, 60.4934, 60.1916, 59.7458, 59.5577, 59.2298, 58.8267,
   58.4887, 58.1403, 57.751, 57.4641, 57.1706, 56.7009, 56.3625, 56.0393, 55.7246, 55.4566, 55.3111, 55.3359, 53.9819, 54.0725, 54.0861, 54.0362,
   53.9723, 53.7746, 53.448, 53.0099, 52.6916, 52.0997, 51.722, 51.234, 50.7471, 49.835, 49.3922, 48.953, 48.6109, 48.1099, 47.6743, 47.3682,
   47.1088, 46.5804, 46.3822, 46.0286, 45.88, 45.5959, 45.2421, 44.9986, 44.8101, 44.5281, 44.2891, 44.0635, 44.1074, 45.5433, 42.9123, 42.0896,
   41.4614, 41.4559, 41.0699, 40.7544, 40.4259, 40.0656, 39.7055, 39.7642, 40.5662, 40.7445, 40.4186, 40.4547, 40.3286, 39.3381, 39.0173, 38.724,
   38.0359, 37.1457, 36.7101, 36.4776, 36.3446, 36.1164, 35.9484, 35.4378, 34.9699, 34.6599, 34.2706, 33.8275, 33.6624, 33.5754, 33.4804, 33.1963,
   32.9358, 32.6114, 32.3345 };
   TGraph *graph = new TGraph(100,Graph_fx1,Graph_fy1);
   graph->SetName("");
   graph->SetTitle("EffTot");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","EffTot",100,0,10.99);
   Graph_Graph_Graph11->SetMinimum(29.39668);
   Graph_Graph_Graph11->SetMaximum(64.65052);
   Graph_Graph_Graph11->SetDirectory(nullptr);
   Graph_Graph_Graph11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph11);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[100] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5,
   6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1,
   8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7,
   9.8, 9.9, 10 };
   Double_t Graph_fy2[100] = { 38.9733, 36.4913, 34.5378, 32.9158, 31.3958, 29.9532, 28.9526, 27.8914, 26.932, 26.0539, 25.2412, 24.5997, 23.6911, 22.8803, 22.3142, 21.8343, 21.2264,
   20.6251, 20.2012, 19.7397, 19.4022, 18.9157, 18.4945, 18.2441, 17.8409, 17.6825, 17.4079, 17.2237, 17.4801, 15.9457, 16.2068, 16.2689, 16.3036,
   16.2865, 16.0494, 15.8559, 15.4888, 15.2286, 14.8595, 14.5395, 14.2191, 13.863, 13.2215, 13.0325, 12.8088, 12.6077, 12.4088, 12.0992, 11.9943,
   11.9275, 11.698, 11.5827, 11.4389, 11.3634, 11.2691, 11.1087, 10.9216, 10.8931, 10.7761, 10.7126, 10.6244, 10.6236, 11.435, 10.1546, 9.7908,
   9.5126, 9.5138, 9.3332, 9.2482, 9.1186, 9.0533, 8.8788, 8.9531, 9.3521, 9.4657, 9.3872, 9.4017, 9.3734, 9.052, 8.9153, 8.7881,
   8.5417, 8.1424, 7.9331, 7.8538, 7.84, 7.8046, 7.7674, 7.6792, 7.5305, 7.5267, 7.3901, 7.2728, 7.2102, 7.1738, 7.0762, 7.0496,
   6.9144, 6.7825, 6.7118 };
   graph = new TGraph(100,Graph_fx2,Graph_fy2);
   graph->SetName("");
   graph->SetTitle("EffR1");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","EffR1",100,0,10.99);
   Graph_Graph_Graph22->SetMinimum(3.48565);
   Graph_Graph_Graph22->SetMaximum(42.19945);
   Graph_Graph_Graph22->SetDirectory(nullptr);
   Graph_Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph22->SetLineColor(ci);
   Graph_Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph22);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[100] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5,
   6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1,
   8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7,
   9.8, 9.9, 10 };
   Double_t Graph_fy3[100] = { 17.4375, 18.9741, 19.7837, 20.3436, 20.7947, 21.1247, 21.1313, 21.1933, 21.1245, 21.0394, 21.0519, 20.816, 20.7213, 20.4658, 20.3567, 20.2159, 19.9931,
   19.7823, 19.5511, 19.2872, 19.227, 19.0443, 18.7991, 18.6037, 18.3972, 18.2909, 18.0855, 18.0075, 18.0019, 17.3783, 17.3881, 17.3964, 17.3224,
   17.2837, 17.2216, 17.0001, 16.8301, 16.7084, 16.4674, 16.2517, 16.0298, 15.7932, 15.3741, 15.1734, 14.9356, 14.8634, 14.6068, 14.4036, 14.3411,
   14.1631, 13.9954, 13.9415, 13.7454, 13.7418, 13.6195, 13.4298, 13.3616, 13.2482, 13.1643, 13.0206, 12.9818, 12.9811, 13.5907, 12.4869, 12.209,
   11.9857, 11.9468, 11.8349, 11.6988, 11.6209, 11.4157, 11.3498, 11.3554, 11.6892, 11.8033, 11.6311, 11.7192, 11.702, 11.2874, 11.1843, 11.0522,
   10.7735, 10.4527, 10.2987, 10.2708, 10.2044, 10.0478, 10.0379, 9.9268, 9.8062, 9.6473, 9.5741, 9.4596, 9.3527, 9.3049, 9.2796, 9.1366,
   9.0682, 8.9504, 8.8699 };
   graph = new TGraph(100,Graph_fx3,Graph_fy3);
   graph->SetName("");
   graph->SetTitle("EffR2");
   graph->SetFillStyle(1000);
   graph->SetLineColor(7);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph_Graph33 = new TH1F("Graph_Graph_Graph33","EffR2",100,0,10.99);
   Graph_Graph_Graph33->SetMinimum(7.63756);
   Graph_Graph_Graph33->SetMaximum(22.42564);
   Graph_Graph_Graph33->SetDirectory(nullptr);
   Graph_Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph33->SetLineColor(ci);
   Graph_Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph33);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx4[100] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5,
   6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1,
   8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7,
   9.8, 9.9, 10 };
   Double_t Graph_fy4[100] = { 3.7239, 4.7842, 5.704, 6.6201, 7.3941, 8.1028, 8.6245, 9.0873, 9.5316, 9.9916, 10.2516, 10.573, 10.9201, 11.1789, 11.4322, 11.5018, 11.6794,
   11.909, 11.9808, 12.0508, 12.0938, 12.2371, 12.3043, 12.282, 12.3924, 12.2731, 12.3339, 12.3803, 12.3016, 12.4644, 12.3545, 12.3473, 12.3563,
   12.3401, 12.3479, 12.3817, 12.3858, 12.3199, 12.265, 12.2965, 12.2553, 12.2637, 12.2199, 12.1295, 12.119, 11.9844, 11.9327, 11.9412, 11.7994,
   11.8005, 11.6544, 11.6263, 11.5725, 11.5499, 11.4645, 11.3814, 11.3853, 11.3525, 11.2925, 11.2658, 11.1999, 11.2373, 11.4058, 10.9869, 10.7746,
   10.7682, 10.7163, 10.6313, 10.5976, 10.495, 10.424, 10.3473, 10.2874, 10.4506, 10.4595, 10.4184, 10.4081, 10.3242, 10.1648, 10.0983, 10.0693,
   9.8993, 9.7811, 9.6466, 9.5378, 9.4854, 9.5135, 9.4399, 9.2543, 9.1961, 9.1246, 8.999, 8.8687, 8.8783, 8.8442, 8.8607, 8.7231,
   8.7183, 8.67, 8.5876 };
   graph = new TGraph(100,Graph_fx4,Graph_fy4);
   graph->SetName("");
   graph->SetTitle("EffR3");
   graph->SetFillStyle(1000);
   graph->SetLineColor(3);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph_Graph44 = new TH1F("Graph_Graph_Graph44","EffR3",100,0,10.99);
   Graph_Graph_Graph44->SetMinimum(2.84985);
   Graph_Graph_Graph44->SetMaximum(13.33845);
   Graph_Graph_Graph44->SetDirectory(nullptr);
   Graph_Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph44->SetLineColor(ci);
   Graph_Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph44);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx5[100] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7,
   1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.1, 3.2, 3.3,
   3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9,
   5, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6, 6.1, 6.2, 6.3, 6.4, 6.5,
   6.6, 6.7, 6.8, 6.9, 7, 7.1, 7.2, 7.3, 7.4, 7.5, 7.6, 7.7, 7.8, 7.9, 8, 8.1,
   8.2, 8.3, 8.4, 8.5, 8.6, 8.7, 8.8, 8.9, 9, 9.1, 9.2, 9.3, 9.4, 9.5, 9.6, 9.7,
   9.8, 9.9, 10 };
   Double_t Graph_fy5[100] = { 0.8596, 1.1179, 1.4179, 1.7583, 2.1069, 2.532, 2.857, 3.2209, 3.588, 3.9194, 4.1962, 4.5047, 4.8591, 5.2208, 5.4546, 5.6778, 5.9278,
   6.1723, 6.4072, 6.6733, 6.7411, 6.9735, 7.103, 7.2327, 7.4088, 7.4781, 7.6293, 7.6996, 7.5523, 8.1935, 8.1231, 8.0735, 8.0539,
   8.062, 8.1557, 8.2103, 8.3052, 8.4347, 8.5078, 8.6343, 8.7298, 8.8272, 9.0195, 9.0568, 9.0896, 9.1554, 9.1616, 9.2303, 9.2334,
   9.2177, 9.2326, 9.2317, 9.2718, 9.2249, 9.2428, 9.3222, 9.3301, 9.3163, 9.2952, 9.2901, 9.2574, 9.2654, 9.1118, 9.2839, 9.3152,
   9.1949, 9.279, 9.2705, 9.2098, 9.1914, 9.1726, 9.1296, 9.1683, 9.0743, 9.016, 8.9819, 8.9257, 8.929, 8.8339, 8.8194, 8.8144,
   8.8214, 8.7695, 8.8317, 8.8152, 8.8148, 8.7505, 8.7032, 8.5775, 8.4371, 8.3613, 8.3074, 8.2264, 8.2212, 8.2525, 8.2639, 8.287,
   8.2349, 8.2085, 8.1652 };
   graph = new TGraph(100,Graph_fx5,Graph_fy5);
   graph->SetName("");
   graph->SetTitle("EffR4");
   graph->SetFillStyle(1000);
   graph->SetLineColor(17);
   graph->SetLineWidth(5);
   
   TH1F *Graph_Graph_Graph55 = new TH1F("Graph_Graph_Graph55","EffR4",100,0,10.99);
   Graph_Graph_Graph55->SetMinimum(0.01255);
   Graph_Graph_Graph55->SetMaximum(10.17715);
   Graph_Graph_Graph55->SetDirectory(nullptr);
   Graph_Graph_Graph55->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph55->SetLineColor(ci);
   Graph_Graph_Graph55->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph55->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph55->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph55->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph55->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph55->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph55->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph55);
   
   multigraph->Add(graph,"");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetLimits(-0.395, 10.495);
   multigraph->GetXaxis()->SetTitle("Energy (MeV)");
   multigraph->GetXaxis()->SetRange(1,100);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Efficiency (%)");
   multigraph->GetYaxis()->SetRange(1,1);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.7705238,0.6190852,0.854183,0.8028391,NULL,"brNDC");
   leg->SetBorderSize(1);

   ci = TColor::GetColor("#000000");
   leg->SetTextColor(ci);
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
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","EffR2","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","EffR3","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","EffR4","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(17);
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
