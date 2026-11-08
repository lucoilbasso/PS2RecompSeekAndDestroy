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

// Function: entry_001745fc
// Address: 0x1745fc - 0x174628
void entry_001745fc_0x1745fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001745fc_0x1745fc");
#endif

    ctx->pc = 0x1745fcu;

    // 0x1745fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1745fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174600: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x174600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x174604: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x174604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x174608: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x174608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x17460c: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x17460cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x174610: 0x9fa60018  lwu         $a2, 0x18($sp)
    ctx->pc = 0x174610u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174614: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x174614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x174618: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x174618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x17461c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17461cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174620: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x174620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x174624: 0x632b8  dsll        $a2, $a2, 10
    ctx->pc = 0x174624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 10);
    ctx->pc = 0x174628u;
}
