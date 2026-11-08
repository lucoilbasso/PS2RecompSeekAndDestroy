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

// Function: entry_0017d780
// Address: 0x17d780 - 0x17d788
void entry_0017d780_0x17d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d780_0x17d780");
#endif

    ctx->pc = 0x17d780u;

    // 0x17d780: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17d784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17d788u;
}
