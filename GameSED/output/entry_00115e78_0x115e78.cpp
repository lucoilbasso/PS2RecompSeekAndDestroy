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

// Function: entry_00115e78
// Address: 0x115e78 - 0x115ee0
void entry_00115e78_0x115e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e78_0x115e78");
#endif

    switch (ctx->pc) {
        case 0x115e9cu: goto label_115e9c;
        case 0x115eacu: goto label_115eac;
        default: break;
    }

    ctx->pc = 0x115e78u;

label_115e78:
    // 0x115e78: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x115e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
label_115e7c:
    // 0x115e7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x115e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_115e80:
    // 0x115e80: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x115e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_115e84:
    // 0x115e84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x115e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_115e88:
    // 0x115e88: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_115e8c:
    // 0x115e8c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x115e8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_115e90:
    // 0x115e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115e94:
    // 0x115e94: 0xc045360  jal         func_114D80
label_115e98:
    if (ctx->pc == 0x115E98u) {
        ctx->pc = 0x115E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E94u;
        // 0x115e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E9Cu;
        goto label_115e9c;
    }
    ctx->pc = 0x115E94u;
    SET_GPR_U32(ctx, 31, 0x115E9Cu);
    ctx->pc = 0x115E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E94u;
    // 0x115e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115E94u, 0x115E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E9Cu;
label_115e9c:
    // 0x115e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115ea0:
    // 0x115ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115ea4:
    // 0x115ea4: 0xc045360  jal         func_114D80
label_115ea8:
    if (ctx->pc == 0x115EA8u) {
        ctx->pc = 0x115EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EA4u;
        // 0x115ea8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115EACu;
        goto label_115eac;
    }
    ctx->pc = 0x115EA4u;
    SET_GPR_U32(ctx, 31, 0x115EACu);
    ctx->pc = 0x115EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EA4u;
    // 0x115ea8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115EA4u, 0x115EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EACu;
label_115eac:
    // 0x115eac: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x115eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_115eb0:
    // 0x115eb0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_115eb4:
    // 0x115eb4: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
label_115eb8:
    // 0x115eb8: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x115eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
label_115ebc:
    // 0x115ebc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_115ec0:
    if (ctx->pc == 0x115EC0u) {
        ctx->pc = 0x115EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EBCu;
        // 0x115ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115EC4u;
        goto label_115ec4;
    }
    ctx->pc = 0x115EBCu;
    {
        const bool branch_taken_0x115ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EBCu;
        // 0x115ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ebc) {
            ctx->pc = 0x115F34u;
            return;
        }
    }
    ctx->pc = 0x115EC4u;
label_115ec4:
    // 0x115ec4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_115ec8:
    // 0x115ec8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_115ecc:
    // 0x115ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_115ed0:
    // 0x115ed0: 0x8c634500  lw          $v1, 0x4500($v1)
    ctx->pc = 0x115ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17664)));
label_115ed4:
    // 0x115ed4: 0x600008  jr          $v1
label_115ed8:
    if (ctx->pc == 0x115ED8u) {
        ctx->pc = 0x115EDCu;
        goto label_115edc;
    }
    ctx->pc = 0x115ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115ED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x115EDCu;
label_115edc:
    // 0x115edc: 0x0  nop
    ctx->pc = 0x115edcu;
    // NOP
    ctx->pc = 0x115ee0u;
}
