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

// Function: entry_001622b8
// Address: 0x1622b8 - 0x162320
void entry_001622b8_0x1622b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001622b8_0x1622b8");
#endif

    ctx->pc = 0x1622b8u;

    // 0x1622b8: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1622b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1622bc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1622bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1622c0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1622c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1622c4: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x1622c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1622c8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1622c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1622cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1622ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1622d0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1622d4: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1622d8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1622d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1622dc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1622dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1622e0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1622e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1622e4: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x1622e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1622e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1622e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1622ec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1622ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1622f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1622f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1622f4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1622f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1622f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1622f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1622fc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1622FCu;
    {
        const bool branch_taken_0x1622fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622FCu;
        // 0x162300: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622fc) {
            ctx->pc = 0x1623C8u;
            return;
        }
    }
    ctx->pc = 0x162304u;
    // 0x162304: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x162304u;
    {
        const bool branch_taken_0x162304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162304) {
            ctx->pc = 0x162308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162304u;
            // 0x162308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162320u;
            return;
        }
    }
    ctx->pc = 0x16230Cu;
    // 0x16230c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16230Cu;
    {
        const bool branch_taken_0x16230c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16230c) {
            ctx->pc = 0x162338u;
            return;
        }
    }
    ctx->pc = 0x162314u;
    // 0x162314: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x162314u;
    {
        const bool branch_taken_0x162314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162314) {
            ctx->pc = 0x16257Cu;
            return;
        }
    }
    ctx->pc = 0x16231Cu;
    // 0x16231c: 0x0  nop
    ctx->pc = 0x16231cu;
    // NOP
    ctx->pc = 0x162320u;
}
