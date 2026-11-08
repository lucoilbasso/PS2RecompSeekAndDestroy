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

// Function: entry_00115578
// Address: 0x115578 - 0x1155c8
void entry_00115578_0x115578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115578_0x115578");
#endif

    switch (ctx->pc) {
        case 0x115590u: goto label_115590;
        case 0x1155a0u: goto label_1155a0;
        default: break;
    }

    ctx->pc = 0x115578u;

label_115578:
    // 0x115578: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x115578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_11557c:
    // 0x11557c: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x11557cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_115580:
    // 0x115580: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x115580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_115584:
    // 0x115584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115588:
    // 0x115588: 0xc045360  jal         func_114D80
label_11558c:
    if (ctx->pc == 0x11558Cu) {
        ctx->pc = 0x11558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115588u;
        // 0x11558c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115590u;
        goto label_115590;
    }
    ctx->pc = 0x115588u;
    SET_GPR_U32(ctx, 31, 0x115590u);
    ctx->pc = 0x11558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115588u;
    // 0x11558c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115588u, 0x115590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115590u;
label_115590:
    // 0x115590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115594:
    // 0x115594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115598:
    // 0x115598: 0xc045360  jal         func_114D80
label_11559c:
    if (ctx->pc == 0x11559Cu) {
        ctx->pc = 0x11559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115598u;
        // 0x11559c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155A0u;
        goto label_1155a0;
    }
    ctx->pc = 0x115598u;
    SET_GPR_U32(ctx, 31, 0x1155A0u);
    ctx->pc = 0x11559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115598u;
    // 0x11559c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115598u, 0x1155A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155A0u;
label_1155a0:
    // 0x1155a0: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1155a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1155a4:
    // 0x1155a4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1155a8:
    if (ctx->pc == 0x1155A8u) {
        ctx->pc = 0x1155A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155A4u;
        // 0x1155a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155ACu;
        goto label_1155ac;
    }
    ctx->pc = 0x1155A4u;
    {
        const bool branch_taken_0x1155a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155A4u;
        // 0x1155a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155a4) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x1155ACu;
label_1155ac:
    // 0x1155ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1155acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1155b0:
    // 0x1155b0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1155b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1155b4:
    // 0x1155b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1155b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1155b8:
    // 0x1155b8: 0x8c634470  lw          $v1, 0x4470($v1)
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17520)));
label_1155bc:
    // 0x1155bc: 0x600008  jr          $v1
label_1155c0:
    if (ctx->pc == 0x1155C0u) {
        ctx->pc = 0x1155C4u;
        goto label_1155c4;
    }
    ctx->pc = 0x1155BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1155BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1155C4u;
label_1155c4:
    // 0x1155c4: 0x0  nop
    ctx->pc = 0x1155c4u;
    // NOP
    ctx->pc = 0x1155c8u;
}
