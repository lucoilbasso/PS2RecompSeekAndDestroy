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

// Function: entry_0011a22c
// Address: 0x11a22c - 0x11a250
void entry_0011a22c_0x11a22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a22c_0x11a22c");
#endif

    ctx->pc = 0x11a22cu;

    // 0x11a22c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a234: 0x260324b0  addiu       $v1, $s0, 0x24B0
    ctx->pc = 0x11a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9392));
    // 0x11a238: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x11a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x11a23c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a240: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11a240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a244: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x11a244u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x11a248: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A248u;
    SET_GPR_U32(ctx, 31, 0x11A250u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A248u, 0x11A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A250u;
}
