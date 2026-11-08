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

// Function: entry_001c7eb0
// Address: 0x1c7eb0 - 0x1c7f10
void entry_001c7eb0_0x1c7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7eb0_0x1c7eb0");
#endif

    switch (ctx->pc) {
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7ee8u: goto label_1c7ee8;
        default: break;
    }

    ctx->pc = 0x1c7eb0u;

    // 0x1c7eb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7eb4: 0x439806  srlv        $s3, $v1, $v0
    ctx->pc = 0x1c7eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c7eb8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c7eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ebc: 0x2531824  and         $v1, $s2, $s3
    ctx->pc = 0x1c7ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 19));
    // 0x1c7ec0: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C7EC0u;
    {
        const bool branch_taken_0x1c7ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ec0) {
            ctx->pc = 0x1C7EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7EC0u;
            // 0x1c7ec4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7F68u;
            return;
        }
    }
    ctx->pc = 0x1C7EC8u;
    // 0x1c7ec8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c7ecc: 0xdc45bba8  ld          $a1, -0x4458($v0)
    ctx->pc = 0x1c7eccu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BBA8u));
    // 0x1c7ed0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C7ED0u;
    SET_GPR_U32(ctx, 31, 0x1C7ED8u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C7ED0u, 0x1C7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7ED8u;
label_1c7ed8:
    // 0x1c7ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7edc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7ee0: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C7EE0u;
    SET_GPR_U32(ctx, 31, 0x1C7EE8u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C7EE0u, 0x1C7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EE8u;
label_1c7ee8:
    // 0x1c7ee8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C7EE8u;
    {
        const bool branch_taken_0x1c7ee8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c7ee8) {
            ctx->pc = 0x1C7F34u;
            return;
        }
    }
    ctx->pc = 0x1C7EF0u;
    // 0x1c7ef0: 0x601000f  bgez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C7EF0u;
    {
        const bool branch_taken_0x1c7ef0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EF0u;
        // 0x1c7ef4: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ef0) {
            ctx->pc = 0x1C7F30u;
            return;
        }
    }
    ctx->pc = 0x1C7EF8u;
    // 0x1c7ef8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c7efc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7EFCu;
    {
        const bool branch_taken_0x1c7efc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EFCu;
        // 0x1c7f00: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7efc) {
            ctx->pc = 0x1C7F10u;
            return;
        }
    }
    ctx->pc = 0x1C7F04u;
    // 0x1c7f04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7F04u;
    {
        const bool branch_taken_0x1c7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F04u;
        // 0x1c7f08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f04) {
            ctx->pc = 0x1C7F2Cu;
            return;
        }
    }
    ctx->pc = 0x1C7F0Cu;
    // 0x1c7f0c: 0x0  nop
    ctx->pc = 0x1c7f0cu;
    // NOP
    ctx->pc = 0x1c7f10u;
}
