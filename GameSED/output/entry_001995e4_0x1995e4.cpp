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

// Function: entry_001995e4
// Address: 0x1995e4 - 0x1995f4
void entry_001995e4_0x1995e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001995e4_0x1995e4");
#endif

    ctx->pc = 0x1995e4u;

    // 0x1995e4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1995e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1995e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1995e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1995ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1995ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1995f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1995f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1995f4u;
}
