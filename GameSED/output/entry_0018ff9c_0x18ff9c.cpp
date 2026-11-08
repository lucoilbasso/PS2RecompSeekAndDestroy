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

// Function: entry_0018ff9c
// Address: 0x18ff9c - 0x18ffb0
void entry_0018ff9c_0x18ff9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff9c_0x18ff9c");
#endif

    ctx->pc = 0x18ff9cu;

    // 0x18ff9c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x18ff9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffa0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x18ffa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18ffa4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18ffa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18ffa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18ffac: 0xfc4e0008  sd          $t6, 0x8($v0)
    ctx->pc = 0x18ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 14));
    ctx->pc = 0x18ffb0u;
}
