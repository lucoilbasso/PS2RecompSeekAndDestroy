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

// Function: entry_00118bfc
// Address: 0x118bfc - 0x118c04
void entry_00118bfc_0x118bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118bfc_0x118bfc");
#endif

    ctx->pc = 0x118bfcu;

    // 0x118bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118c04u;
}
