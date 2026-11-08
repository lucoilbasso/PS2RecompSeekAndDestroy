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

// Function: entry_0017a7d0
// Address: 0x17a7d0 - 0x17a7f0
void entry_0017a7d0_0x17a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a7d0_0x17a7d0");
#endif

    ctx->pc = 0x17a7d0u;

    // 0x17a7d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a7d4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x17a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x17a7d8: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x17a7d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x17a7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7e0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x17a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x17a7e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17A7E4u;
    {
        const bool branch_taken_0x17a7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E4u;
        // 0x17a7e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7e4) {
            ctx->pc = 0x17A7F0u;
            return;
        }
    }
    ctx->pc = 0x17A7ECu;
    // 0x17a7ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x17a7f0u;
}
