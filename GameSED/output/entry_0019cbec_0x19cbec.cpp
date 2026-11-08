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

// Function: entry_0019cbec
// Address: 0x19cbec - 0x19cc18
void entry_0019cbec_0x19cbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cbec_0x19cbec");
#endif

    ctx->pc = 0x19cbecu;

    // 0x19cbec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x19cbecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbf0: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x19cbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19cbf4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x19CBF4u;
    {
        const bool branch_taken_0x19cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF4u;
        // 0x19cbf8: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbf4) {
            ctx->pc = 0x19CC88u;
            return;
        }
    }
    ctx->pc = 0x19CBFCu;
    // 0x19cbfc: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x19cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x19cc00: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19cc04: 0x3c0b0022  lui         $t3, 0x22
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34 << 16));
    // 0x19cc08: 0x256beff8  addiu       $t3, $t3, -0x1008
    ctx->pc = 0x19cc08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963192));
    // 0x19cc0c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x19cc10: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19cc10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19cc14: 0x0  nop
    ctx->pc = 0x19cc14u;
    // NOP
    ctx->pc = 0x19cc18u;
}
