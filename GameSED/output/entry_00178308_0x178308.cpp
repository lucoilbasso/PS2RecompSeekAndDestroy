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

// Function: entry_00178308
// Address: 0x178308 - 0x178340
void entry_00178308_0x178308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178308_0x178308");
#endif

    switch (ctx->pc) {
        case 0x178310u: goto label_178310;
        case 0x178334u: goto label_178334;
        default: break;
    }

    ctx->pc = 0x178308u;

    // 0x178308: 0xc06e96e  jal         func_1BA5B8
    ctx->pc = 0x178308u;
    SET_GPR_U32(ctx, 31, 0x178310u);
    ctx->pc = 0x17830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178308u;
    // 0x17830c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA5B8u, 0x178308u, 0x178310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178310u;
label_178310:
    // 0x178310: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x178310u;
    {
        const bool branch_taken_0x178310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178310u;
        // 0x178314: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178310) {
            ctx->pc = 0x1782D8u;
            return;
        }
    }
    ctx->pc = 0x178318u;
    // 0x178318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17831c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178320: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x178320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178324: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x178328: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x178328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17832c: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x17832Cu;
    SET_GPR_U32(ctx, 31, 0x178334u);
    ctx->pc = 0x178330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17832Cu;
    // 0x178330: 0xae23fffc  sw          $v1, -0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x17832Cu, 0x178334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178334u;
label_178334:
    // 0x178334: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x178334u;
    {
        const bool branch_taken_0x178334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178334u;
        // 0x178338: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178334) {
            ctx->pc = 0x178368u;
            return;
        }
    }
    ctx->pc = 0x17833Cu;
    // 0x17833c: 0x0  nop
    ctx->pc = 0x17833cu;
    // NOP
    ctx->pc = 0x178340u;
}
