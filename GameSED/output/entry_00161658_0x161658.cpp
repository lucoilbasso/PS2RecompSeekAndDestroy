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

// Function: entry_00161658
// Address: 0x161658 - 0x161664
void entry_00161658_0x161658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161658_0x161658");
#endif

    ctx->pc = 0x161658u;

    // 0x161658: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16165c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x161660: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x161660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    ctx->pc = 0x161664u;
}
