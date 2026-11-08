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

// Function: $L2
// Address: 0x1cffdc - 0x1cfff8
void ps2__L2_0x1cffdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x1cffdc");
#endif

    ctx->pc = 0x1cffdcu;

    // 0x1cffdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cffe0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1cffe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1cffe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1cffe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cffe8: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CFFE8u;
    {
        const bool branch_taken_0x1cffe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cffe8) {
            ctx->pc = 0x1D001Cu;
            return;
        }
    }
    ctx->pc = 0x1CFFF0u;
    // 0x1cfff0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1cfff0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1cfff4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1cfff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1cfff8u;
}
