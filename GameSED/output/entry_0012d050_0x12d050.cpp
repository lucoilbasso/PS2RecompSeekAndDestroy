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

// Function: entry_0012d050
// Address: 0x12d050 - 0x12d078
void entry_0012d050_0x12d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d050_0x12d050");
#endif

    ctx->pc = 0x12d050u;

    // 0x12d050: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x12D050u;
    {
        const bool branch_taken_0x12d050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D050u;
        // 0x12d054: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d050) {
            ctx->pc = 0x12D148u;
            return;
        }
    }
    ctx->pc = 0x12D058u;
    // 0x12d058: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12d058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d05c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x12d05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d060: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x12D060u;
    {
        const bool branch_taken_0x12d060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D060u;
        // 0x12d064: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d060) {
            ctx->pc = 0x12D110u;
            return;
        }
    }
    ctx->pc = 0x12D068u;
    // 0x12d068: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12d068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12d06c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d070: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12d070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12d074: 0x0  nop
    ctx->pc = 0x12d074u;
    // NOP
    ctx->pc = 0x12d078u;
}
