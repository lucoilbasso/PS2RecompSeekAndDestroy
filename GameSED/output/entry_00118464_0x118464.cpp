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

// Function: entry_00118464
// Address: 0x118464 - 0x1184b4
void entry_00118464_0x118464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118464_0x118464");
#endif

    switch (ctx->pc) {
        case 0x118474u: goto label_118474;
        case 0x118488u: goto label_118488;
        case 0x118490u: goto label_118490;
        case 0x118498u: goto label_118498;
        case 0x1184a0u: goto label_1184a0;
        case 0x1184a8u: goto label_1184a8;
        default: break;
    }

    ctx->pc = 0x118464u;

    // 0x118464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11846c: 0xc046136  jal         func_1184D8
    ctx->pc = 0x11846Cu;
    SET_GPR_U32(ctx, 31, 0x118474u);
    ctx->pc = 0x118470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11846Cu;
    // 0x118470: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184D8u, 0x11846Cu, 0x118474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118474u;
label_118474:
    // 0x118474: 0xae000c2c  sw          $zero, 0xC2C($s0)
    ctx->pc = 0x118474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3116), GPR_U32(ctx, 0));
    // 0x118478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11847c: 0xae001cb0  sw          $zero, 0x1CB0($s0)
    ctx->pc = 0x11847cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7344), GPR_U32(ctx, 0));
    // 0x118480: 0xc0461fa  jal         func_1187E8
    ctx->pc = 0x118480u;
    SET_GPR_U32(ctx, 31, 0x118488u);
    ctx->pc = 0x118484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118480u;
    // 0x118484: 0xae001cb4  sw          $zero, 0x1CB4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 7348), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187E8u, 0x118480u, 0x118488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118488u;
label_118488:
    // 0x118488: 0xc046286  jal         func_118A18
    ctx->pc = 0x118488u;
    SET_GPR_U32(ctx, 31, 0x118490u);
    ctx->pc = 0x11848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118488u;
    // 0x11848c: 0x26040c50  addiu       $a0, $s0, 0xC50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A18u, 0x118488u, 0x118490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118490u;
label_118490:
    // 0x118490: 0xc046334  jal         func_118CD0
    ctx->pc = 0x118490u;
    SET_GPR_U32(ctx, 31, 0x118498u);
    ctx->pc = 0x118494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118490u;
    // 0x118494: 0x26040e30  addiu       $a0, $s0, 0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CD0u, 0x118490u, 0x118498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118498u;
label_118498:
    // 0x118498: 0xc04616a  jal         func_1185A8
    ctx->pc = 0x118498u;
    SET_GPR_U32(ctx, 31, 0x1184A0u);
    ctx->pc = 0x11849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118498u;
    // 0x11849c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1185A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185A8u, 0x118498u, 0x1184A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184A0u;
label_1184a0:
    // 0x1184a0: 0xc0461be  jal         func_1186F8
    ctx->pc = 0x1184A0u;
    SET_GPR_U32(ctx, 31, 0x1184A8u);
    ctx->pc = 0x1184A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184A0u;
    // 0x1184a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186F8u, 0x1184A0u, 0x1184A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184A8u;
label_1184a8:
    // 0x1184a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1184a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1184ac: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1184ACu;
    {
        const bool branch_taken_0x1184ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1184B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184ACu;
        // 0x1184b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184ac) {
            ctx->pc = 0x1184C0u;
            return;
        }
    }
    ctx->pc = 0x1184B4u;
}
