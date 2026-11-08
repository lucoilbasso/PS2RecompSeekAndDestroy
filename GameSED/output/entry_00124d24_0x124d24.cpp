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

// Function: entry_00124d24
// Address: 0x124d24 - 0x124d38
void entry_00124d24_0x124d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124d24_0x124d24");
#endif

    ctx->pc = 0x124d24u;

    // 0x124d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d28: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x124d28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x124d2c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x124d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x124d30: 0xe6b50004  swc1        $f21, 0x4($s5)
    ctx->pc = 0x124d30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x124d34: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x124d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    ctx->pc = 0x124d38u;
}
