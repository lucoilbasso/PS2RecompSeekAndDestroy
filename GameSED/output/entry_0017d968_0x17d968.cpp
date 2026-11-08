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

// Function: entry_0017d968
// Address: 0x17d968 - 0x17d974
void entry_0017d968_0x17d968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d968_0x17d968");
#endif

    ctx->pc = 0x17d968u;

    // 0x17d968: 0x2502007f  addiu       $v0, $t0, 0x7F
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
    // 0x17d96c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x17d96cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x17d970: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17d970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x17d974u;
}
