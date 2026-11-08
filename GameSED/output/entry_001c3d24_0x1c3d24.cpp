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

// Function: entry_001c3d24
// Address: 0x1c3d24 - 0x1c3d54
void entry_001c3d24_0x1c3d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3d24_0x1c3d24");
#endif

    ctx->pc = 0x1c3d24u;

    // 0x1c3d24: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1c3d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c3d28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3d2c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1c3d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1c3d30: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c3d30u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x1c3d34: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1c3d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1c3d38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3d3c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x1c3d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c3d40: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1c3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c3d44: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1c3d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1c3d48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1c3d4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1c3d4cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 5));
    // 0x1c3d50: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1c3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1c3d54u;
}
