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

// Function: entry_00115130
// Address: 0x115130 - 0x115190
void entry_00115130_0x115130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115130_0x115130");
#endif

    switch (ctx->pc) {
        case 0x11514cu: goto label_11514c;
        case 0x11515cu: goto label_11515c;
        default: break;
    }

    ctx->pc = 0x115130u;

label_115130:
    // 0x115130: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x115130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
label_115134:
    // 0x115134: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x115134u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
label_115138:
    // 0x115138: 0xb18818  mult        $s1, $a1, $s1
    ctx->pc = 0x115138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_11513c:
    // 0x11513c: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x11513cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_115140:
    // 0x115140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115144:
    // 0x115144: 0xc045360  jal         func_114D80
label_115148:
    if (ctx->pc == 0x115148u) {
        ctx->pc = 0x115148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115144u;
        // 0x115148: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11514Cu;
        goto label_11514c;
    }
    ctx->pc = 0x115144u;
    SET_GPR_U32(ctx, 31, 0x11514Cu);
    ctx->pc = 0x115148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115144u;
    // 0x115148: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115144u, 0x11514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11514Cu;
label_11514c:
    // 0x11514c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115150:
    // 0x115150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115154:
    // 0x115154: 0xc045360  jal         func_114D80
label_115158:
    if (ctx->pc == 0x115158u) {
        ctx->pc = 0x115158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115154u;
        // 0x115158: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11515Cu;
        goto label_11515c;
    }
    ctx->pc = 0x115154u;
    SET_GPR_U32(ctx, 31, 0x11515Cu);
    ctx->pc = 0x115158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115154u;
    // 0x115158: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115154u, 0x11515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11515Cu;
label_11515c:
    // 0x11515c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11515cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_115160:
    // 0x115160: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_115164:
    // 0x115164: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x115164u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
label_115168:
    // 0x115168: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x115168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
label_11516c:
    // 0x11516c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_115170:
    if (ctx->pc == 0x115170u) {
        ctx->pc = 0x115170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11516Cu;
        // 0x115170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115174u;
        goto label_115174;
    }
    ctx->pc = 0x11516Cu;
    {
        const bool branch_taken_0x11516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11516Cu;
        // 0x115170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11516c) {
            ctx->pc = 0x1151E4u;
            return;
        }
    }
    ctx->pc = 0x115174u;
label_115174:
    // 0x115174: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_115178:
    // 0x115178: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_11517c:
    // 0x11517c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_115180:
    // 0x115180: 0x8c634410  lw          $v1, 0x4410($v1)
    ctx->pc = 0x115180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17424)));
label_115184:
    // 0x115184: 0x600008  jr          $v1
label_115188:
    if (ctx->pc == 0x115188u) {
        ctx->pc = 0x11518Cu;
        goto label_11518c;
    }
    ctx->pc = 0x115184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11518Cu;
label_11518c:
    // 0x11518c: 0x0  nop
    ctx->pc = 0x11518cu;
    // NOP
    ctx->pc = 0x115190u;
}
