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

// Function: entry_00131608
// Address: 0x131608 - 0x131620
void entry_00131608_0x131608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131608_0x131608");
#endif

    ctx->pc = 0x131608u;

    // 0x131608: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x131608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x13160c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x13160cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131610: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x131610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x131614: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x131614u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131618: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x131618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x13161c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x13161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x131620u;
}
