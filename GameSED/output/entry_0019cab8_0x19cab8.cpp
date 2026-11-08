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

// Function: entry_0019cab8
// Address: 0x19cab8 - 0x19cabc
void entry_0019cab8_0x19cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cab8_0x19cab8");
#endif

    ctx->pc = 0x19cab8u;

    // 0x19cab8: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x19cab8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x19cabcu;
}
