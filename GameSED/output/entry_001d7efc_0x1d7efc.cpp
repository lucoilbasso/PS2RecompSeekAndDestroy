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

// Function: entry_001d7efc
// Address: 0x1d7efc - 0x1d7f10
void entry_001d7efc_0x1d7efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7efc_0x1d7efc");
#endif

    ctx->pc = 0x1d7efcu;

    // 0x1d7efc: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x1d7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
    // 0x1d7f00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1d7f10u;
}
