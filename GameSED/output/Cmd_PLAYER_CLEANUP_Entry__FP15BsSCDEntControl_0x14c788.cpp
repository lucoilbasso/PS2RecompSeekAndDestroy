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

// Function: Cmd_PLAYER_CLEANUP_Entry__FP15BsSCDEntControl
// Address: 0x14c788 - 0x14c888
void Cmd_PLAYER_CLEANUP_Entry__FP15BsSCDEntControl_0x14c788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PLAYER_CLEANUP_Entry__FP15BsSCDEntControl_0x14c788");
#endif

    switch (ctx->pc) {
        case 0x14c788u: goto label_14c788;
        case 0x14c78cu: goto label_14c78c;
        case 0x14c790u: goto label_14c790;
        case 0x14c794u: goto label_14c794;
        case 0x14c798u: goto label_14c798;
        case 0x14c79cu: goto label_14c79c;
        case 0x14c7a0u: goto label_14c7a0;
        case 0x14c7a4u: goto label_14c7a4;
        case 0x14c7a8u: goto label_14c7a8;
        case 0x14c7acu: goto label_14c7ac;
        case 0x14c7b0u: goto label_14c7b0;
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7bcu: goto label_14c7bc;
        case 0x14c7c0u: goto label_14c7c0;
        case 0x14c7c4u: goto label_14c7c4;
        case 0x14c7c8u: goto label_14c7c8;
        case 0x14c7ccu: goto label_14c7cc;
        case 0x14c7d0u: goto label_14c7d0;
        case 0x14c7d4u: goto label_14c7d4;
        case 0x14c7d8u: goto label_14c7d8;
        case 0x14c7dcu: goto label_14c7dc;
        case 0x14c7e0u: goto label_14c7e0;
        case 0x14c7e4u: goto label_14c7e4;
        case 0x14c7e8u: goto label_14c7e8;
        case 0x14c7ecu: goto label_14c7ec;
        case 0x14c7f0u: goto label_14c7f0;
        case 0x14c7f4u: goto label_14c7f4;
        case 0x14c7f8u: goto label_14c7f8;
        case 0x14c7fcu: goto label_14c7fc;
        case 0x14c800u: goto label_14c800;
        case 0x14c804u: goto label_14c804;
        case 0x14c808u: goto label_14c808;
        case 0x14c80cu: goto label_14c80c;
        case 0x14c810u: goto label_14c810;
        case 0x14c814u: goto label_14c814;
        case 0x14c818u: goto label_14c818;
        case 0x14c81cu: goto label_14c81c;
        case 0x14c820u: goto label_14c820;
        case 0x14c824u: goto label_14c824;
        case 0x14c828u: goto label_14c828;
        case 0x14c82cu: goto label_14c82c;
        case 0x14c830u: goto label_14c830;
        case 0x14c834u: goto label_14c834;
        case 0x14c838u: goto label_14c838;
        case 0x14c83cu: goto label_14c83c;
        case 0x14c840u: goto label_14c840;
        case 0x14c844u: goto label_14c844;
        case 0x14c848u: goto label_14c848;
        case 0x14c84cu: goto label_14c84c;
        case 0x14c850u: goto label_14c850;
        case 0x14c854u: goto label_14c854;
        case 0x14c858u: goto label_14c858;
        case 0x14c85cu: goto label_14c85c;
        case 0x14c860u: goto label_14c860;
        case 0x14c864u: goto label_14c864;
        case 0x14c868u: goto label_14c868;
        case 0x14c86cu: goto label_14c86c;
        case 0x14c870u: goto label_14c870;
        case 0x14c874u: goto label_14c874;
        case 0x14c878u: goto label_14c878;
        case 0x14c87cu: goto label_14c87c;
        case 0x14c880u: goto label_14c880;
        case 0x14c884u: goto label_14c884;
        default: break;
    }

    ctx->pc = 0x14c788u;

label_14c788:
    // 0x14c788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14c78c:
    // 0x14c78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14c790:
    // 0x14c790: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_14c794:
    // 0x14c794: 0xc06a26e  jal         func_1A89B8
label_14c798:
    if (ctx->pc == 0x14C798u) {
        ctx->pc = 0x14C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C794u;
        // 0x14c798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C79Cu;
        goto label_14c79c;
    }
    ctx->pc = 0x14C794u;
    SET_GPR_U32(ctx, 31, 0x14C79Cu);
    ctx->pc = 0x14C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C794u;
    // 0x14c798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14C794u, 0x14C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C79Cu;
label_14c79c:
    // 0x14c79c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x14c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_14c7a0:
    // 0x14c7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14c7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c7a4:
    // 0x14c7a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_14c7a8:
    // 0x14c7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14c7ac:
    // 0x14c7ac: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_14c7b0:
    if (ctx->pc == 0x14C7B0u) {
        ctx->pc = 0x14C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7ACu;
        // 0x14c7b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7B4u;
        goto label_14c7b4;
    }
    ctx->pc = 0x14C7ACu;
    {
        const bool branch_taken_0x14c7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x14C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7ACu;
        // 0x14c7b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7ac) {
            ctx->pc = 0x14C7E0u;
            goto label_14c7e0;
        }
    }
    ctx->pc = 0x14C7B4u;
label_14c7b4:
    // 0x14c7b4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14c7b8:
    // 0x14c7b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14c7bc:
    // 0x14c7bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c7c0:
    // 0x14c7c0: 0x8c463630  lw          $a2, 0x3630($v0)
    ctx->pc = 0x14c7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_14c7c4:
    // 0x14c7c4: 0x50c0002d  beql        $a2, $zero, . + 4 + (0x2D << 2)
label_14c7c8:
    if (ctx->pc == 0x14C7C8u) {
        ctx->pc = 0x14C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7C4u;
        // 0x14c7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7CCu;
        goto label_14c7cc;
    }
    ctx->pc = 0x14C7C4u;
    {
        const bool branch_taken_0x14c7c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7c4) {
            ctx->pc = 0x14C7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C7C4u;
            // 0x14c7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C87Cu;
            goto label_14c87c;
        }
    }
    ctx->pc = 0x14C7CCu;
label_14c7cc:
    // 0x14c7cc: 0x54a00020  bnel        $a1, $zero, . + 4 + (0x20 << 2)
label_14c7d0:
    if (ctx->pc == 0x14C7D0u) {
        ctx->pc = 0x14C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7CCu;
        // 0x14c7d0: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7D4u;
        goto label_14c7d4;
    }
    ctx->pc = 0x14C7CCu;
    {
        const bool branch_taken_0x14c7cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c7cc) {
            ctx->pc = 0x14C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C7CCu;
            // 0x14c7d0: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C850u;
            goto label_14c850;
        }
    }
    ctx->pc = 0x14C7D4u;
label_14c7d4:
    // 0x14c7d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_14c7d8:
    if (ctx->pc == 0x14C7D8u) {
        ctx->pc = 0x14C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7D4u;
        // 0x14c7d8: 0x8cc201ac  lw          $v0, 0x1AC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7DCu;
        goto label_14c7dc;
    }
    ctx->pc = 0x14C7D4u;
    {
        const bool branch_taken_0x14c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7D4u;
        // 0x14c7d8: 0x8cc201ac  lw          $v0, 0x1AC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7d4) {
            ctx->pc = 0x14C804u;
            goto label_14c804;
        }
    }
    ctx->pc = 0x14C7DCu;
label_14c7dc:
    // 0x14c7dc: 0x0  nop
    ctx->pc = 0x14c7dcu;
    // NOP
label_14c7e0:
    // 0x14c7e0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14c7e4:
    // 0x14c7e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14c7e8:
    // 0x14c7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c7ec:
    // 0x14c7ec: 0x8c463630  lw          $a2, 0x3630($v0)
    ctx->pc = 0x14c7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
label_14c7f0:
    // 0x14c7f0: 0x50c00022  beql        $a2, $zero, . + 4 + (0x22 << 2)
label_14c7f4:
    if (ctx->pc == 0x14C7F4u) {
        ctx->pc = 0x14C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7F0u;
        // 0x14c7f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C7F8u;
        goto label_14c7f8;
    }
    ctx->pc = 0x14C7F0u;
    {
        const bool branch_taken_0x14c7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7f0) {
            ctx->pc = 0x14C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C7F0u;
            // 0x14c7f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C87Cu;
            goto label_14c87c;
        }
    }
    ctx->pc = 0x14C7F8u;
label_14c7f8:
    // 0x14c7f8: 0x56000015  bnel        $s0, $zero, . + 4 + (0x15 << 2)
label_14c7fc:
    if (ctx->pc == 0x14C7FCu) {
        ctx->pc = 0x14C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7F8u;
        // 0x14c7fc: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C800u;
        goto label_14c800;
    }
    ctx->pc = 0x14C7F8u;
    {
        const bool branch_taken_0x14c7f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c7f8) {
            ctx->pc = 0x14C7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C7F8u;
            // 0x14c7fc: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C850u;
            goto label_14c850;
        }
    }
    ctx->pc = 0x14C800u;
label_14c800:
    // 0x14c800: 0x8cc201ac  lw          $v0, 0x1AC($a2)
    ctx->pc = 0x14c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
label_14c804:
    // 0x14c804: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14c804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_14c808:
    // 0x14c808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14c808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c80c:
    // 0x14c80c: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x14c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c810:
    // 0x14c810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14c810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c814:
    // 0x14c814: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_14c818:
    // 0x14c818: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14c818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14c81c:
    // 0x14c81c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14c820:
    if (ctx->pc == 0x14C820u) {
        ctx->pc = 0x14C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C81Cu;
        // 0x14c820: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C824u;
        goto label_14c824;
    }
    ctx->pc = 0x14C81Cu;
    {
        const bool branch_taken_0x14c81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C81Cu;
        // 0x14c820: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c81c) {
            ctx->pc = 0x14C838u;
            goto label_14c838;
        }
    }
    ctx->pc = 0x14C824u;
label_14c824:
    // 0x14c824: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14c824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14c828:
    // 0x14c828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14c828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_14c82c:
    // 0x14c82c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c82cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_14c830:
    // 0x14c830: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14c830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_14c834:
    // 0x14c834: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14c834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_14c838:
    // 0x14c838: 0x8ca23620  lw          $v0, 0x3620($a1)
    ctx->pc = 0x14c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13856)));
label_14c83c:
    // 0x14c83c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x14c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_14c840:
    // 0x14c840: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14c844:
    // 0x14c844: 0xaca23620  sw          $v0, 0x3620($a1)
    ctx->pc = 0x14c844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 13856), GPR_U32(ctx, 2));
label_14c848:
    // 0x14c848: 0xac62d16c  sw          $v0, -0x2E94($v1)
    ctx->pc = 0x14c848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955372), GPR_U32(ctx, 2));
label_14c84c:
    // 0x14c84c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14c850:
    // 0x14c850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c854:
    // 0x14c854: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14c858:
    // 0x14c858: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c85c:
    // 0x14c85c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c860:
    // 0x14c860: 0x60f809  jalr        $v1
label_14c864:
    if (ctx->pc == 0x14C864u) {
        ctx->pc = 0x14C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C860u;
        // 0x14c864: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C868u;
        goto label_14c868;
    }
    ctx->pc = 0x14C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C868u);
        ctx->pc = 0x14C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C860u;
        // 0x14c864: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C860u, 0x14C868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C868u;
label_14c868:
    // 0x14c868: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x14c868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_14c86c:
    // 0x14c86c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_14c870:
    // 0x14c870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14c870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14c874:
    // 0x14c874: 0xac403630  sw          $zero, 0x3630($v0)
    ctx->pc = 0x14c874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13872), GPR_U32(ctx, 0));
label_14c878:
    // 0x14c878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c87c:
    // 0x14c87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14c87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14c880:
    // 0x14c880: 0x3e00008  jr          $ra
label_14c884:
    if (ctx->pc == 0x14C884u) {
        ctx->pc = 0x14C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C880u;
        // 0x14c884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C888u;
        goto label_fallthrough_0x14c880;
    }
    ctx->pc = 0x14C880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C880u;
        // 0x14c884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c880:
    ctx->pc = 0x14C888u;
}
