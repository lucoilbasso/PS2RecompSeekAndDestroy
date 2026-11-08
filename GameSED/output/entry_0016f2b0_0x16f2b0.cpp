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

// Function: entry_0016f2b0
// Address: 0x16f2b0 - 0x16f304
void entry_0016f2b0_0x16f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f2b0_0x16f2b0");
#endif

    ctx->pc = 0x16f2b0u;

    // 0x16f2b0: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x16f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x16f2b4: 0xffbf0418  sd          $ra, 0x418($sp)
    ctx->pc = 0x16f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 31));
    // 0x16f2b8: 0xffa60450  sd          $a2, 0x450($sp)
    ctx->pc = 0x16f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 6));
    // 0x16f2bc: 0xffa70458  sd          $a3, 0x458($sp)
    ctx->pc = 0x16f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 7));
    // 0x16f2c0: 0xffa80460  sd          $t0, 0x460($sp)
    ctx->pc = 0x16f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 8));
    // 0x16f2c4: 0xffa90468  sd          $t1, 0x468($sp)
    ctx->pc = 0x16f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 9));
    // 0x16f2c8: 0xffaa0470  sd          $t2, 0x470($sp)
    ctx->pc = 0x16f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 10));
    // 0x16f2cc: 0xffab0478  sd          $t3, 0x478($sp)
    ctx->pc = 0x16f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 11));
    // 0x16f2d0: 0xe7ac0428  swc1        $f12, 0x428($sp)
    ctx->pc = 0x16f2d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
    // 0x16f2d4: 0xe7ad042c  swc1        $f13, 0x42C($sp)
    ctx->pc = 0x16f2d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1068), bits); }
    // 0x16f2d8: 0xe7ae0430  swc1        $f14, 0x430($sp)
    ctx->pc = 0x16f2d8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
    // 0x16f2dc: 0xe7af0434  swc1        $f15, 0x434($sp)
    ctx->pc = 0x16f2dcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
    // 0x16f2e0: 0xe7b00438  swc1        $f16, 0x438($sp)
    ctx->pc = 0x16f2e0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
    // 0x16f2e4: 0xe7b1043c  swc1        $f17, 0x43C($sp)
    ctx->pc = 0x16f2e4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
    // 0x16f2e8: 0xe7b20440  swc1        $f18, 0x440($sp)
    ctx->pc = 0x16f2e8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
    // 0x16f2ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16F2ECu;
    {
        const bool branch_taken_0x16f2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2ECu;
        // 0x16f2f0: 0xe7b30444  swc1        $f19, 0x444($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2ec) {
            ctx->pc = 0x16F318u;
            return;
        }
    }
    ctx->pc = 0x16F2F4u;
    // 0x16f2f4: 0x27a20448  addiu       $v0, $sp, 0x448
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
    // 0x16f2f8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16f2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f300: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16f304u;
}
