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

// Function: entry_00174968
// Address: 0x174968 - 0x174974
void entry_00174968_0x174968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174968_0x174968");
#endif

    ctx->pc = 0x174968u;

    // 0x174968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17496c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17496cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x174970: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x174970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    ctx->pc = 0x174974u;
}
