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

// Function: entry_00131ea4
// Address: 0x131ea4 - 0x131ec8
void entry_00131ea4_0x131ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ea4_0x131ea4");
#endif

    ctx->pc = 0x131ea4u;

    // 0x131ea4: 0x8cc40114  lw          $a0, 0x114($a2)
    ctx->pc = 0x131ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
    // 0x131ea8: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x131ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
    // 0x131eac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131eb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131ebc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x131ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x131ec0: 0xaca200e8  sw          $v0, 0xE8($a1)
    ctx->pc = 0x131ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 2));
    // 0x131ec4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x131ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->pc = 0x131ec8u;
}
