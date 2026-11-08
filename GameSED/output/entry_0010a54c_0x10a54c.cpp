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

// Function: entry_0010a54c
// Address: 0x10a54c - 0x10a550
void entry_0010a54c_0x10a54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a54c_0x10a54c");
#endif

    ctx->pc = 0x10a54cu;

    // 0x10a54c: 0xfe240038  sd          $a0, 0x38($s1)
    ctx->pc = 0x10a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 4));
    ctx->pc = 0x10a550u;
}
