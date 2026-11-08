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

// Function: caseD_4
// Address: 0x161188 - 0x1611d0
void caseD_4_0x161188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x161188");
#endif

    ctx->pc = 0x161188u;

    // 0x161188: 0x26061a74  addiu       $a2, $s0, 0x1A74
    ctx->pc = 0x161188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6772));
    // 0x16118c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161190: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x161190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x161194: 0x26041a80  addiu       $a0, $s0, 0x1A80
    ctx->pc = 0x161194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6784));
    // 0x161198: 0x24e500d0  addiu       $a1, $a3, 0xD0
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x16119c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1611a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1611a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1611a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1611a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1611a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1611a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1611ac: 0xac671a68  sw          $a3, 0x1A68($v1)
    ctx->pc = 0x1611acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6760), GPR_U32(ctx, 7));
    // 0x1611b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1611b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1611b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1611b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1611b8: 0x26031a90  addiu       $v1, $s0, 0x1A90
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6800));
    // 0x1611bc: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1611bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1611c0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1611c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1611c4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1611C4u;
    {
        const bool branch_taken_0x1611c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611C4u;
        // 0x1611c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611c4) {
            ctx->pc = 0x16146Cu;
            return;
        }
    }
    ctx->pc = 0x1611CCu;
    // 0x1611cc: 0x0  nop
    ctx->pc = 0x1611ccu;
    // NOP
    ctx->pc = 0x1611d0u;
}
