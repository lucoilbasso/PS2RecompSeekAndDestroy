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

// Function: entry_0014efec
// Address: 0x14efec - 0x14eff8
void entry_0014efec_0x14efec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014efec_0x14efec");
#endif

    ctx->pc = 0x14efecu;

    // 0x14efec: 0x26020870  addiu       $v0, $s0, 0x870
    ctx->pc = 0x14efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x14eff0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14eff4: 0xae000894  sw          $zero, 0x894($s0)
    ctx->pc = 0x14eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2196), GPR_U32(ctx, 0));
    ctx->pc = 0x14eff8u;
}
