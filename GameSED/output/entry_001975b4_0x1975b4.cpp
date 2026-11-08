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

// Function: entry_001975b4
// Address: 0x1975b4 - 0x197618
void entry_001975b4_0x1975b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001975b4_0x1975b4");
#endif

    switch (ctx->pc) {
        case 0x1975c4u: goto label_1975c4;
        case 0x1975ccu: goto label_1975cc;
        case 0x1975e0u: goto label_1975e0;
        case 0x197608u: goto label_197608;
        case 0x197610u: goto label_197610;
        default: break;
    }

    ctx->pc = 0x1975b4u;

    // 0x1975b4: 0x1660ffcc  bnez        $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1975B4u;
    {
        const bool branch_taken_0x1975b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1975B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975B4u;
        // 0x1975b8: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975b4) {
            ctx->pc = 0x1974E8u;
            return;
        }
    }
    ctx->pc = 0x1975BCu;
    // 0x1975bc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1975BCu;
    SET_GPR_U32(ctx, 31, 0x1975C4u);
    ctx->pc = 0x1975C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975BCu;
    // 0x1975c0: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1975BCu, 0x1975C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975C4u;
label_1975c4:
    // 0x1975c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1975C4u;
    SET_GPR_U32(ctx, 31, 0x1975CCu);
    ctx->pc = 0x1975C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975C4u;
    // 0x1975c8: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1975C4u, 0x1975CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975CCu;
label_1975cc:
    // 0x1975cc: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1975d0: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1975D0u;
    {
        const bool branch_taken_0x1975d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1975d0) {
            ctx->pc = 0x1975D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1975D0u;
            // 0x1975d4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197618u;
            return;
        }
    }
    ctx->pc = 0x1975D8u;
    // 0x1975d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1975D8u;
    SET_GPR_U32(ctx, 31, 0x1975E0u);
    ctx->pc = 0x1975DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975D8u;
    // 0x1975dc: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1975D8u, 0x1975E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975E0u;
label_1975e0:
    // 0x1975e0: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x1975e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x1975e4: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x1975e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x1975e8: 0x8e850080  lw          $a1, 0x80($s4)
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1975ec: 0xaee30018  sw          $v1, 0x18($s7)
    ctx->pc = 0x1975ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 3));
    // 0x1975f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1975f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1975f4: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x1975f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1975f8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1975f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1975fc: 0xae850080  sw          $a1, 0x80($s4)
    ctx->pc = 0x1975fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 5));
    // 0x197600: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x197600u;
    SET_GPR_U32(ctx, 31, 0x197608u);
    ctx->pc = 0x197604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197600u;
    // 0x197604: 0xae97008c  sw          $s7, 0x8C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x197600u, 0x197608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197608u;
label_197608:
    // 0x197608: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x197608u;
    SET_GPR_U32(ctx, 31, 0x197610u);
    ctx->pc = 0x19760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197608u;
    // 0x19760c: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x197608u, 0x197610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197610u;
label_197610:
    // 0x197610: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x197610u;
    {
        const bool branch_taken_0x197610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197610) {
            ctx->pc = 0x19763Cu;
            return;
        }
    }
    ctx->pc = 0x197618u;
}
