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

// Function: entry_00112bc4
// Address: 0x112bc4 - 0x112bdc
void entry_00112bc4_0x112bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112bc4_0x112bc4");
#endif

    ctx->pc = 0x112bc4u;

    // 0x112bc4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x112bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112bc8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x112bc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112bcc: 0x70032048  psubw       $a0, $zero, $v1
    ctx->pc = 0x112bccu;
    SET_GPR_VEC(ctx, 4, PS2_PSUBW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x112bd0: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x112bd0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x112bd4: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x112bd4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x112bd8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x112bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x112bdcu;
}
