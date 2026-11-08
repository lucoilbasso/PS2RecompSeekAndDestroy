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

// Function: entry_0018ebac
// Address: 0x18ebac - 0x18ebc4
void entry_0018ebac_0x18ebac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebac_0x18ebac");
#endif

    ctx->pc = 0x18ebacu;

    // 0x18ebac: 0x8cc20208  lw          $v0, 0x208($a2)
    ctx->pc = 0x18ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 520)));
    // 0x18ebb0: 0x84c30246  lh          $v1, 0x246($a2)
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 582)));
    // 0x18ebb4: 0x94c40248  lhu         $a0, 0x248($a2)
    ctx->pc = 0x18ebb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 584)));
    // 0x18ebb8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x18ebb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18ebbc: 0x8cc50214  lw          $a1, 0x214($a2)
    ctx->pc = 0x18ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
    // 0x18ebc0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    ctx->pc = 0x18ebc4u;
}
