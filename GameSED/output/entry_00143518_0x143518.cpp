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

// Function: entry_00143518
// Address: 0x143518 - 0x143538
void entry_00143518_0x143518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143518_0x143518");
#endif

    ctx->pc = 0x143518u;

    // 0x143518: 0xaca60080  sw          $a2, 0x80($a1)
    ctx->pc = 0x143518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 6));
    // 0x14351c: 0x24a200b0  addiu       $v0, $a1, 0xB0
    ctx->pc = 0x14351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x143520: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x143520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x143524: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x143524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x143528: 0xaca700a0  sw          $a3, 0xA0($a1)
    ctx->pc = 0x143528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 7));
    // 0x14352c: 0xa4a000a4  sh          $zero, 0xA4($a1)
    ctx->pc = 0x14352cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x143530: 0xa4a000a6  sh          $zero, 0xA6($a1)
    ctx->pc = 0x143530u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x143534: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x143534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
    ctx->pc = 0x143538u;
}
