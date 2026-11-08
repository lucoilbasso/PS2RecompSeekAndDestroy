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

// Function: entry_001978fc
// Address: 0x1978fc - 0x197914
void entry_001978fc_0x1978fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001978fc_0x1978fc");
#endif

    ctx->pc = 0x1978fcu;

    // 0x1978fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1978fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x197900: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x197900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x197904: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x197904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x197908: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x197908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x19790c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x19790cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x197910: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x197914u;
}
