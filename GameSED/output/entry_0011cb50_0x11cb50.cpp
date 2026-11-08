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

// Function: entry_0011cb50
// Address: 0x11cb50 - 0x11cb60
void entry_0011cb50_0x11cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cb50_0x11cb50");
#endif

    ctx->pc = 0x11cb50u;

    // 0x11cb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11cb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11cb54: 0x2442c180  addiu       $v0, $v0, -0x3E80
    ctx->pc = 0x11cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951296));
    // 0x11cb58: 0x24834600  addiu       $v1, $a0, 0x4600
    ctx->pc = 0x11cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x11cb5c: 0x248649c0  addiu       $a2, $a0, 0x49C0
    ctx->pc = 0x11cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 18880));
    ctx->pc = 0x11cb60u;
}
