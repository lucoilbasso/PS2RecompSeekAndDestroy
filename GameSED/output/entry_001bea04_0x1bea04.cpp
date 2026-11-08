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

// Function: entry_001bea04
// Address: 0x1bea04 - 0x1bea4c
void entry_001bea04_0x1bea04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bea04_0x1bea04");
#endif

    switch (ctx->pc) {
        case 0x1bea20u: goto label_1bea20;
        default: break;
    }

    ctx->pc = 0x1bea04u;

    // 0x1bea04: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x1bea04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x1bea08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bea10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bea14: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x1bea14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
    // 0x1bea18: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1BEA18u;
    SET_GPR_U32(ctx, 31, 0x1BEA20u);
    ctx->pc = 0x1BEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA18u;
    // 0x1bea1c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1BEA18u, 0x1BEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA20u;
label_1bea20:
    // 0x1bea20: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x1bea20u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1bea24: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1bea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bea28: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BEA28u;
    {
        const bool branch_taken_0x1bea28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA28u;
        // 0x1bea2c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea28) {
            ctx->pc = 0x1BEA4Cu;
            return;
        }
    }
    ctx->pc = 0x1BEA30u;
    // 0x1bea30: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEA30u;
    {
        const bool branch_taken_0x1bea30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA30u;
        // 0x1bea34: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea30) {
            ctx->pc = 0x1BEA4Cu;
            return;
        }
    }
    ctx->pc = 0x1BEA38u;
    // 0x1bea38: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEA38u;
    {
        const bool branch_taken_0x1bea38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA38u;
        // 0x1bea3c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea38) {
            ctx->pc = 0x1BEA4Cu;
            return;
        }
    }
    ctx->pc = 0x1BEA40u;
    // 0x1bea40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bea44: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BEA44u;
    SET_GPR_U32(ctx, 31, 0x1BEA4Cu);
    ctx->pc = 0x1BEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA44u;
    // 0x1bea48: 0x24a5b378  addiu       $a1, $a1, -0x4C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BEA44u, 0x1BEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA4Cu;
}
