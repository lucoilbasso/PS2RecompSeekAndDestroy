#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SpecialDataSetInit__16ST_EffectSpecialPUiP10WImageInfoP9ApcPtcSpl
// Address: 0x1234b0 - 0x123638
void SpecialDataSetInit__16ST_EffectSpecialPUiP10WImageInfoP9ApcPtcSpl_0x1234b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpecialDataSetInit__16ST_EffectSpecialPUiP10WImageInfoP9ApcPtcSpl_0x1234b0");
#endif

    switch (ctx->pc) {
        case 0x1234b0u: goto label_1234b0;
        case 0x1234b4u: goto label_1234b4;
        case 0x1234b8u: goto label_1234b8;
        case 0x1234bcu: goto label_1234bc;
        case 0x1234c0u: goto label_1234c0;
        case 0x1234c4u: goto label_1234c4;
        case 0x1234c8u: goto label_1234c8;
        case 0x1234ccu: goto label_1234cc;
        case 0x1234d0u: goto label_1234d0;
        case 0x1234d4u: goto label_1234d4;
        case 0x1234d8u: goto label_1234d8;
        case 0x1234dcu: goto label_1234dc;
        case 0x1234e0u: goto label_1234e0;
        case 0x1234e4u: goto label_1234e4;
        case 0x1234e8u: goto label_1234e8;
        case 0x1234ecu: goto label_1234ec;
        case 0x1234f0u: goto label_1234f0;
        case 0x1234f4u: goto label_1234f4;
        case 0x1234f8u: goto label_1234f8;
        case 0x1234fcu: goto label_1234fc;
        case 0x123500u: goto label_123500;
        case 0x123504u: goto label_123504;
        case 0x123508u: goto label_123508;
        case 0x12350cu: goto label_12350c;
        case 0x123510u: goto label_123510;
        case 0x123514u: goto label_123514;
        case 0x123518u: goto label_123518;
        case 0x12351cu: goto label_12351c;
        case 0x123520u: goto label_123520;
        case 0x123524u: goto label_123524;
        case 0x123528u: goto label_123528;
        case 0x12352cu: goto label_12352c;
        case 0x123530u: goto label_123530;
        case 0x123534u: goto label_123534;
        case 0x123538u: goto label_123538;
        case 0x12353cu: goto label_12353c;
        case 0x123540u: goto label_123540;
        case 0x123544u: goto label_123544;
        case 0x123548u: goto label_123548;
        case 0x12354cu: goto label_12354c;
        case 0x123550u: goto label_123550;
        case 0x123554u: goto label_123554;
        case 0x123558u: goto label_123558;
        case 0x12355cu: goto label_12355c;
        case 0x123560u: goto label_123560;
        case 0x123564u: goto label_123564;
        case 0x123568u: goto label_123568;
        case 0x12356cu: goto label_12356c;
        case 0x123570u: goto label_123570;
        case 0x123574u: goto label_123574;
        case 0x123578u: goto label_123578;
        case 0x12357cu: goto label_12357c;
        case 0x123580u: goto label_123580;
        case 0x123584u: goto label_123584;
        case 0x123588u: goto label_123588;
        case 0x12358cu: goto label_12358c;
        case 0x123590u: goto label_123590;
        case 0x123594u: goto label_123594;
        case 0x123598u: goto label_123598;
        case 0x12359cu: goto label_12359c;
        case 0x1235a0u: goto label_1235a0;
        case 0x1235a4u: goto label_1235a4;
        case 0x1235a8u: goto label_1235a8;
        case 0x1235acu: goto label_1235ac;
        case 0x1235b0u: goto label_1235b0;
        case 0x1235b4u: goto label_1235b4;
        case 0x1235b8u: goto label_1235b8;
        case 0x1235bcu: goto label_1235bc;
        case 0x1235c0u: goto label_1235c0;
        case 0x1235c4u: goto label_1235c4;
        case 0x1235c8u: goto label_1235c8;
        case 0x1235ccu: goto label_1235cc;
        case 0x1235d0u: goto label_1235d0;
        case 0x1235d4u: goto label_1235d4;
        case 0x1235d8u: goto label_1235d8;
        case 0x1235dcu: goto label_1235dc;
        case 0x1235e0u: goto label_1235e0;
        case 0x1235e4u: goto label_1235e4;
        case 0x1235e8u: goto label_1235e8;
        case 0x1235ecu: goto label_1235ec;
        case 0x1235f0u: goto label_1235f0;
        case 0x1235f4u: goto label_1235f4;
        case 0x1235f8u: goto label_1235f8;
        case 0x1235fcu: goto label_1235fc;
        case 0x123600u: goto label_123600;
        case 0x123604u: goto label_123604;
        case 0x123608u: goto label_123608;
        case 0x12360cu: goto label_12360c;
        case 0x123610u: goto label_123610;
        case 0x123614u: goto label_123614;
        case 0x123618u: goto label_123618;
        case 0x12361cu: goto label_12361c;
        case 0x123620u: goto label_123620;
        case 0x123624u: goto label_123624;
        case 0x123628u: goto label_123628;
        case 0x12362cu: goto label_12362c;
        case 0x123630u: goto label_123630;
        case 0x123634u: goto label_123634;
        default: break;
    }

    ctx->pc = 0x1234b0u;

label_1234b0:
    // 0x1234b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1234b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1234b4:
    // 0x1234b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1234b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1234b8:
    // 0x1234b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1234b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1234bc:
    // 0x1234bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1234bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1234c0:
    // 0x1234c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1234c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1234c4:
    // 0x1234c4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1234c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1234c8:
    // 0x1234c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1234c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1234cc:
    // 0x1234cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1234ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1234d0:
    // 0x1234d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1234d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1234d4:
    // 0x1234d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1234d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1234d8:
    // 0x1234d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1234d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1234dc:
    // 0x1234dc: 0xc0478ea  jal         func_11E3A8
label_1234e0:
    if (ctx->pc == 0x1234E0u) {
        ctx->pc = 0x1234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234DCu;
        // 0x1234e0: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1234E4u;
        goto label_1234e4;
    }
    ctx->pc = 0x1234DCu;
    SET_GPR_U32(ctx, 31, 0x1234E4u);
    ctx->pc = 0x1234E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234DCu;
    // 0x1234e0: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3A8u, 0x1234DCu, 0x1234E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234E4u;
label_1234e4:
    // 0x1234e4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_1234e8:
    if (ctx->pc == 0x1234E8u) {
        ctx->pc = 0x1234E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234E4u;
        // 0x1234e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1234ECu;
        goto label_1234ec;
    }
    ctx->pc = 0x1234E4u;
    {
        const bool branch_taken_0x1234e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234E4u;
        // 0x1234e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234e4) {
            ctx->pc = 0x123618u;
            goto label_123618;
        }
    }
    ctx->pc = 0x1234ECu;
label_1234ec:
    // 0x1234ec: 0xae1100d0  sw          $s1, 0xD0($s0)
    ctx->pc = 0x1234ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
label_1234f0:
    // 0x1234f0: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x1234f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1234f4:
    // 0x1234f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1234f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1234f8:
    // 0x1234f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1234f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1234fc:
    // 0x1234fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1234fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123500:
    // 0x123500: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x123500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_123504:
    // 0x123504: 0xc04782c  jal         func_11E0B0
label_123508:
    if (ctx->pc == 0x123508u) {
        ctx->pc = 0x123508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123504u;
        // 0x123508: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12350Cu;
        goto label_12350c;
    }
    ctx->pc = 0x123504u;
    SET_GPR_U32(ctx, 31, 0x12350Cu);
    ctx->pc = 0x123508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123504u;
    // 0x123508: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x123504u, 0x12350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12350Cu;
label_12350c:
    // 0x12350c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12350cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123510:
    // 0x123510: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_123514:
    if (ctx->pc == 0x123514u) {
        ctx->pc = 0x123514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123510u;
        // 0x123514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123518u;
        goto label_123518;
    }
    ctx->pc = 0x123510u;
    {
        const bool branch_taken_0x123510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123510u;
        // 0x123514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123510) {
            ctx->pc = 0x123528u;
            goto label_123528;
        }
    }
    ctx->pc = 0x123518u;
label_123518:
    // 0x123518: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12351c:
    // 0x12351c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12351cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_123520:
    // 0x123520: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x123520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_123524:
    // 0x123524: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x123524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
label_123528:
    // 0x123528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12352c:
    // 0x12352c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12352cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123530:
    // 0x123530: 0xc04782c  jal         func_11E0B0
label_123534:
    if (ctx->pc == 0x123534u) {
        ctx->pc = 0x123534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123530u;
        // 0x123534: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123538u;
        goto label_123538;
    }
    ctx->pc = 0x123530u;
    SET_GPR_U32(ctx, 31, 0x123538u);
    ctx->pc = 0x123534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123530u;
    // 0x123534: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x123530u, 0x123538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123538u;
label_123538:
    // 0x123538: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x123538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12353c:
    // 0x12353c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_123540:
    if (ctx->pc == 0x123540u) {
        ctx->pc = 0x123540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12353Cu;
        // 0x123540: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123544u;
        goto label_123544;
    }
    ctx->pc = 0x12353Cu;
    {
        const bool branch_taken_0x12353c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12353Cu;
        // 0x123540: 0xe60000dc  swc1        $f0, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12353c) {
            ctx->pc = 0x123554u;
            goto label_123554;
        }
    }
    ctx->pc = 0x123544u;
label_123544:
    // 0x123544: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_123548:
    // 0x123548: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x123548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12354c:
    // 0x12354c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x12354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_123550:
    // 0x123550: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x123550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_123554:
    // 0x123554: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x123554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123558:
    // 0x123558: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x123558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12355c:
    // 0x12355c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_123560:
    if (ctx->pc == 0x123560u) {
        ctx->pc = 0x123560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12355Cu;
        // 0x123560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123564u;
        goto label_123564;
    }
    ctx->pc = 0x12355Cu;
    {
        const bool branch_taken_0x12355c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12355Cu;
        // 0x123560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12355c) {
            ctx->pc = 0x12359Cu;
            goto label_12359c;
        }
    }
    ctx->pc = 0x123564u;
label_123564:
    // 0x123564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123568:
    // 0x123568: 0xc04844a  jal         func_121128
label_12356c:
    if (ctx->pc == 0x12356Cu) {
        ctx->pc = 0x12356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123568u;
        // 0x12356c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123570u;
        goto label_123570;
    }
    ctx->pc = 0x123568u;
    SET_GPR_U32(ctx, 31, 0x123570u);
    ctx->pc = 0x12356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123568u;
    // 0x12356c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x123568u, 0x123570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123570u;
label_123570:
    // 0x123570: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_123574:
    if (ctx->pc == 0x123574u) {
        ctx->pc = 0x123574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123570u;
        // 0x123574: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123578u;
        goto label_123578;
    }
    ctx->pc = 0x123570u;
    {
        const bool branch_taken_0x123570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123570) {
            ctx->pc = 0x123574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123570u;
            // 0x123574: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12359Cu;
            goto label_12359c;
        }
    }
    ctx->pc = 0x123578u;
label_123578:
    // 0x123578: 0xc066f72  jal         func_19BDC8
label_12357c:
    if (ctx->pc == 0x12357Cu) {
        ctx->pc = 0x12357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123578u;
        // 0x12357c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123580u;
        goto label_123580;
    }
    ctx->pc = 0x123578u;
    SET_GPR_U32(ctx, 31, 0x123580u);
    ctx->pc = 0x12357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123578u;
    // 0x12357c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x123578u, 0x123580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123580u;
label_123580:
    // 0x123580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x123580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123584:
    // 0x123584: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x123584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_123588:
    // 0x123588: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x123588u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_12358c:
    // 0x12358c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12358cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_123590:
    // 0x123590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123594:
    // 0x123594: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x123594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_123598:
    // 0x123598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12359c:
    // 0x12359c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x12359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1235a0:
    // 0x1235a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1235a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1235a4:
    // 0x1235a4: 0xc04782c  jal         func_11E0B0
label_1235a8:
    if (ctx->pc == 0x1235A8u) {
        ctx->pc = 0x1235A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235A4u;
        // 0x1235a8: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235ACu;
        goto label_1235ac;
    }
    ctx->pc = 0x1235A4u;
    SET_GPR_U32(ctx, 31, 0x1235ACu);
    ctx->pc = 0x1235A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235A4u;
    // 0x1235a8: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x1235A4u, 0x1235ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235ACu;
label_1235ac:
    // 0x1235ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1235acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1235b0:
    // 0x1235b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1235b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1235b4:
    // 0x1235b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1235b8:
    if (ctx->pc == 0x1235B8u) {
        ctx->pc = 0x1235B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235B4u;
        // 0x1235b8: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235BCu;
        goto label_1235bc;
    }
    ctx->pc = 0x1235B4u;
    {
        const bool branch_taken_0x1235b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1235B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235B4u;
        // 0x1235b8: 0xe60000ec  swc1        $f0, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235b4) {
            ctx->pc = 0x1235CCu;
            goto label_1235cc;
        }
    }
    ctx->pc = 0x1235BCu;
label_1235bc:
    // 0x1235bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1235bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1235c0:
    // 0x1235c0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1235c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1235c4:
    // 0x1235c4: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1235c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_1235c8:
    // 0x1235c8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1235c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_1235cc:
    // 0x1235cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1235ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1235d0:
    // 0x1235d0: 0xc04844a  jal         func_121128
label_1235d4:
    if (ctx->pc == 0x1235D4u) {
        ctx->pc = 0x1235D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235D0u;
        // 0x1235d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235D8u;
        goto label_1235d8;
    }
    ctx->pc = 0x1235D0u;
    SET_GPR_U32(ctx, 31, 0x1235D8u);
    ctx->pc = 0x1235D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235D0u;
    // 0x1235d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1235D0u, 0x1235D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235D8u;
label_1235d8:
    // 0x1235d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1235dc:
    if (ctx->pc == 0x1235DCu) {
        ctx->pc = 0x1235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235D8u;
        // 0x1235dc: 0x8e030114  lw          $v1, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235E0u;
        goto label_1235e0;
    }
    ctx->pc = 0x1235D8u;
    {
        const bool branch_taken_0x1235d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1235d8) {
            ctx->pc = 0x1235DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1235D8u;
            // 0x1235dc: 0x8e030114  lw          $v1, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1235ECu;
            goto label_1235ec;
        }
    }
    ctx->pc = 0x1235E0u;
label_1235e0:
    // 0x1235e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1235e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1235e4:
    // 0x1235e4: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1235e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_1235e8:
    // 0x1235e8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_1235ec:
    // 0x1235ec: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x1235ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1235f0:
    // 0x1235f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1235f4:
    if (ctx->pc == 0x1235F4u) {
        ctx->pc = 0x1235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F0u;
        // 0x1235f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235F8u;
        goto label_1235f8;
    }
    ctx->pc = 0x1235F0u;
    {
        const bool branch_taken_0x1235f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F0u;
        // 0x1235f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f0) {
            ctx->pc = 0x123618u;
            goto label_123618;
        }
    }
    ctx->pc = 0x1235F8u;
label_1235f8:
    // 0x1235f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1235f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1235fc:
    // 0x1235fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1235fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123600:
    // 0x123600: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x123600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_123604:
    // 0x123604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x123604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_123608:
    // 0x123608: 0x8c637dd0  lw          $v1, 0x7DD0($v1)
    ctx->pc = 0x123608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32208)));
label_12360c:
    // 0x12360c: 0x60f809  jalr        $v1
label_123610:
    if (ctx->pc == 0x123610u) {
        ctx->pc = 0x123610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12360Cu;
        // 0x123610: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123614u;
        goto label_123614;
    }
    ctx->pc = 0x12360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123614u);
        ctx->pc = 0x123610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12360Cu;
        // 0x123610: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12360Cu, 0x123614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123614u;
label_123614:
    // 0x123614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123618:
    // 0x123618: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x123618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12361c:
    // 0x12361c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12361cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_123620:
    // 0x123620: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_123624:
    // 0x123624: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x123624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_123628:
    // 0x123628: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12362c:
    // 0x12362c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x12362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123630:
    // 0x123630: 0x3e00008  jr          $ra
label_123634:
    if (ctx->pc == 0x123634u) {
        ctx->pc = 0x123634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123630u;
        // 0x123634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123638u;
        goto label_fallthrough_0x123630;
    }
    ctx->pc = 0x123630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123630u;
        // 0x123634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123630:
    ctx->pc = 0x123638u;
}
