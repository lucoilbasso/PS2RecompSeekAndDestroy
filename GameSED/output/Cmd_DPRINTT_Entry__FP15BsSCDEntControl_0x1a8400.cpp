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

// Function: Cmd_DPRINTT_Entry__FP15BsSCDEntControl
// Address: 0x1a8400 - 0x1a8518
void Cmd_DPRINTT_Entry__FP15BsSCDEntControl_0x1a8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DPRINTT_Entry__FP15BsSCDEntControl_0x1a8400");
#endif

    switch (ctx->pc) {
        case 0x1a8428u: goto label_1a8428;
        case 0x1a848cu: goto label_1a848c;
        case 0x1a84acu: goto label_1a84ac;
        case 0x1a84c4u: goto label_1a84c4;
        case 0x1a84f8u: goto label_1a84f8;
        case 0x1a850cu: goto label_1a850c;
        default: break;
    }

    ctx->pc = 0x1a8400u;

    // 0x1a8400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a8404: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1a8404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8408: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a8408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a840c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1a840cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a8410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8414: 0x8d26001c  lw          $a2, 0x1C($t1)
    ctx->pc = 0x1a8414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1a8418: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a841c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A841Cu;
    {
        const bool branch_taken_0x1a841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A841Cu;
        // 0x1a8420: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a841c) {
            ctx->pc = 0x1A8450u;
            goto label_1a8450;
        }
    }
    ctx->pc = 0x1A8424u;
    // 0x1a8424: 0x0  nop
    ctx->pc = 0x1a8424u;
    // NOP
label_1a8428:
    // 0x1a8428: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a8428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a842c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a8430: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8434: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1a8434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a8438: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1a8438u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a843c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a843cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a8440: 0x47300a  movz        $a2, $v0, $a3
    ctx->pc = 0x1a8440u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a8444: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1a8444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8448: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8448u;
    {
        const bool branch_taken_0x1a8448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8448u;
        // 0x1a844c: 0x30870003  andi        $a3, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8448) {
            ctx->pc = 0x1A8428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8428;
        }
    }
    ctx->pc = 0x1A8450u;
label_1a8450:
    // 0x1a8450: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x1a8450u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8454: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8458: 0x47300a  movz        $a2, $v0, $a3
    ctx->pc = 0x1a8458u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a845c: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1a845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1a8460: 0x83a40000  lb          $a0, 0x0($sp)
    ctx->pc = 0x1a8460u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8464: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A8464u;
    {
        const bool branch_taken_0x1a8464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8464u;
        // 0x1a8468: 0xad26001c  sw          $a2, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8464) {
            ctx->pc = 0x1A84D0u;
            goto label_1a84d0;
        }
    }
    ctx->pc = 0x1A846Cu;
    // 0x1a846c: 0x83a30001  lb          $v1, 0x1($sp)
    ctx->pc = 0x1a846cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x1a8470: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1a8474: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8474u;
    {
        const bool branch_taken_0x1a8474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8474) {
            ctx->pc = 0x1A8478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8474u;
            // 0x1a8478: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8498u;
            goto label_1a8498;
        }
    }
    ctx->pc = 0x1A847Cu;
    // 0x1a847c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a847cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a8480: 0x27a50002  addiu       $a1, $sp, 0x2
    ctx->pc = 0x1a8480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x1a8484: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A8484u;
    SET_GPR_U32(ctx, 31, 0x1A848Cu);
    ctx->pc = 0x1A8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8484u;
    // 0x1a8488: 0x2484d938  addiu       $a0, $a0, -0x26C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A8484u, 0x1A848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A848Cu;
label_1a848c:
    // 0x1a848c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8490: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A8490u;
    {
        const bool branch_taken_0x1a8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8490u;
        // 0x1a8494: 0xaf829080  sw          $v0, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8490) {
            ctx->pc = 0x1A850Cu;
            goto label_1a850c;
        }
    }
    ctx->pc = 0x1A8498u;
label_1a8498:
    // 0x1a8498: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8498u;
    {
        const bool branch_taken_0x1a8498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8498u;
        // 0x1a849c: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8498) {
            ctx->pc = 0x1A84B8u;
            goto label_1a84b8;
        }
    }
    ctx->pc = 0x1A84A0u;
    // 0x1a84a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a84a4: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1A84A4u;
    SET_GPR_U32(ctx, 31, 0x1A84ACu);
    ctx->pc = 0x1A84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84A4u;
    // 0x1a84a8: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1A84A4u, 0x1A84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84ACu;
label_1a84ac:
    // 0x1a84ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A84ACu;
    {
        const bool branch_taken_0x1a84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84ACu;
        // 0x1a84b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84ac) {
            ctx->pc = 0x1A8510u;
            goto label_1a8510;
        }
    }
    ctx->pc = 0x1A84B4u;
    // 0x1a84b4: 0x0  nop
    ctx->pc = 0x1a84b4u;
    // NOP
label_1a84b8:
    // 0x1a84b8: 0x27a50001  addiu       $a1, $sp, 0x1
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x1a84bc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A84BCu;
    SET_GPR_U32(ctx, 31, 0x1A84C4u);
    ctx->pc = 0x1A84C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84BCu;
    // 0x1a84c0: 0x2484d940  addiu       $a0, $a0, -0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A84BCu, 0x1A84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84C4u;
label_1a84c4:
    // 0x1a84c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a84c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A84C8u;
    {
        const bool branch_taken_0x1a84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84C8u;
        // 0x1a84cc: 0xaf839080  sw          $v1, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84c8) {
            ctx->pc = 0x1A850Cu;
            goto label_1a850c;
        }
    }
    ctx->pc = 0x1A84D0u;
label_1a84d0:
    // 0x1a84d0: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x1a84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1a84d4: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A84D4u;
    {
        const bool branch_taken_0x1a84d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a84d4) {
            ctx->pc = 0x1A84D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A84D4u;
            // 0x1a84d8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8500u;
            goto label_1a8500;
        }
    }
    ctx->pc = 0x1A84DCu;
    // 0x1a84dc: 0x8f839080  lw          $v1, -0x6F80($gp)
    ctx->pc = 0x1a84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a84e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a84e4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A84E4u;
    {
        const bool branch_taken_0x1a84e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a84e4) {
            ctx->pc = 0x1A84E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A84E4u;
            // 0x1a84e8: 0xaf809080  sw          $zero, -0x6F80($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A850Cu;
            goto label_1a850c;
        }
    }
    ctx->pc = 0x1A84ECu;
    // 0x1a84ec: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a84f0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A84F0u;
    SET_GPR_U32(ctx, 31, 0x1A84F8u);
    ctx->pc = 0x1A84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84F0u;
    // 0x1a84f4: 0x2484d948  addiu       $a0, $a0, -0x26B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A84F0u, 0x1A84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84F8u;
label_1a84f8:
    // 0x1a84f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A84F8u;
    {
        const bool branch_taken_0x1a84f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84F8u;
        // 0x1a84fc: 0xaf809080  sw          $zero, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84f8) {
            ctx->pc = 0x1A850Cu;
            goto label_1a850c;
        }
    }
    ctx->pc = 0x1A8500u;
label_1a8500:
    // 0x1a8500: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a8500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8504: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A8504u;
    SET_GPR_U32(ctx, 31, 0x1A850Cu);
    ctx->pc = 0x1A8508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8504u;
    // 0x1a8508: 0x2484d940  addiu       $a0, $a0, -0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A8504u, 0x1A850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A850Cu;
label_1a850c:
    // 0x1a850c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a850cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8510:
    // 0x1a8510: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8510u;
        // 0x1a8514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8518u;
}
