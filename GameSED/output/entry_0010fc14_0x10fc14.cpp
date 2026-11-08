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

// Function: entry_0010fc14
// Address: 0x10fc14 - 0x10fc28
void entry_0010fc14_0x10fc14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc14_0x10fc14");
#endif

    ctx->pc = 0x10fc14u;

    // 0x10fc14: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x10fc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x10fc18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FC18u;
    {
        const bool branch_taken_0x10fc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC18u;
        // 0x10fc1c: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc18) {
            ctx->pc = 0x10FC28u;
            return;
        }
    }
    ctx->pc = 0x10FC20u;
    // 0x10fc20: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x10fc20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x10fc24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->pc = 0x10fc28u;
}
