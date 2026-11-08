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

// Function: entry_001206f0
// Address: 0x1206f0 - 0x120740
void entry_001206f0_0x1206f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001206f0_0x1206f0");
#endif

    ctx->pc = 0x1206f0u;

label_1206f0:
    // 0x1206f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1206f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1206f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1206f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1206f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1206f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1206fc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1206fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x120700: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x120700u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x120704: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x120704u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x120708: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x120708u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12070c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12070cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x120710: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120710u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120714: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x120714u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x120718: 0x2ea2000a  sltiu       $v0, $s5, 0xA
    ctx->pc = 0x120718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12071c: 0x0  nop
    ctx->pc = 0x12071cu;
    // NOP
    // 0x120720: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x120720u;
    {
        const bool branch_taken_0x120720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120720u;
        // 0x120724: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120720) {
            ctx->pc = 0x1206F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1206f0;
        }
    }
    ctx->pc = 0x120728u;
    // 0x120728: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x120728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x12072c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12072cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120730: 0x24560750  addiu       $s6, $v0, 0x750
    ctx->pc = 0x120730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x120734: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x120734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x120738: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x120738u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12073c: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x12073cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x120740u;
}
