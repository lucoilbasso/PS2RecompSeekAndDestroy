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

// Function: entry_00197df4
// Address: 0x197df4 - 0x197e2c
void entry_00197df4_0x197df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197df4_0x197df4");
#endif

    ctx->pc = 0x197df4u;

    // 0x197df4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x197df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x197df8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dfc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x197dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x197e00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x197e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e04: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x197e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x197e08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x197e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e0c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x197e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x197e10: 0x26900020  addiu       $s0, $s4, 0x20
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x197e14: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x197e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x197e18: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x197e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x197e1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197E1Cu;
    {
        const bool branch_taken_0x197e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E1Cu;
        // 0x197e20: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e1c) {
            ctx->pc = 0x197E2Cu;
            return;
        }
    }
    ctx->pc = 0x197E24u;
    // 0x197e24: 0xc061920  jal         func_186480
    ctx->pc = 0x197E24u;
    SET_GPR_U32(ctx, 31, 0x197E2Cu);
    ctx->pc = 0x197E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E24u;
    // 0x197e28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x197E24u, 0x197E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E2Cu;
}
