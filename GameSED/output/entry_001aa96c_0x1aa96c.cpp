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

// Function: entry_001aa96c
// Address: 0x1aa96c - 0x1aa9b8
void entry_001aa96c_0x1aa96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa96c_0x1aa96c");
#endif

    ctx->pc = 0x1aa96cu;

    // 0x1aa96c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1aa96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1aa970: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1aa970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1aa974: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x1aa974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x1aa978: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1aa978u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x1aa97c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1aa97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1aa980: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x1aa980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    // 0x1aa984: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x1aa984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x1aa988: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1aa988u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1aa98c: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x1aa98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x1aa990: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x1aa990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x1aa994: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1aa994u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x1aa998: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x1aa998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x1aa99c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1aa99cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aa9a0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1aa9a0u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 2));
    // 0x1aa9a4: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1aa9a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa9a8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1aa9a8u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x1aa9ac: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x1aa9acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1aa9b0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1aa9b0u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 2));
    // 0x1aa9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1aa9b8u;
}
