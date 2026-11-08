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

// Function: entry_001143c8
// Address: 0x1143c8 - 0x1143e8
void entry_001143c8_0x1143c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001143c8_0x1143c8");
#endif

    ctx->pc = 0x1143c8u;

    // 0x1143c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1143c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1143cc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1143ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1143d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1143d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1143d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1143d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1143d8: 0x2cc40008  sltiu       $a0, $a2, 0x8
    ctx->pc = 0x1143d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1143dc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1143dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1143e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1143e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1143e4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1143e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1143e8u;
}
