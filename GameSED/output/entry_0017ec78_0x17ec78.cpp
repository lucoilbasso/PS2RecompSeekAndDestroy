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

// Function: entry_0017ec78
// Address: 0x17ec78 - 0x17ecec
void entry_0017ec78_0x17ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec78_0x17ec78");
#endif

    switch (ctx->pc) {
        case 0x17ecd4u: goto label_17ecd4;
        default: break;
    }

    ctx->pc = 0x17ec78u;

label_17ec78:
    // 0x17ec78: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x17ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17ec7c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x17ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17ec80: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x17ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x17ec84: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x17ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17ec88: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17ec8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x17ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x17ec90: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17ec94: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x17ec94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ec98: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x17ec98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x17ec9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ec9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca0: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x17eca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17eca4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17eca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca8: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x17eca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x17ecac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecb0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17ecb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17ecb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17ecb8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17ecbc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17ecc0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17ecc4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17ecc8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17eccc: 0xc05fd96  jal         func_17F658
    ctx->pc = 0x17ECCCu;
    SET_GPR_U32(ctx, 31, 0x17ECD4u);
    ctx->pc = 0x17ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECCCu;
    // 0x17ecd0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F658u, 0x17ECCCu, 0x17ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECD4u;
label_17ecd4:
    // 0x17ecd4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17ecd8: 0x96630014  lhu         $v1, 0x14($s3)
    ctx->pc = 0x17ecd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x17ecdc: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x17ecdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x17ece0: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x17ece0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x17ece4: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x17ECE4u;
    {
        const bool branch_taken_0x17ece4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECE4u;
        // 0x17ece8: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ece4) {
            ctx->pc = 0x17EC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ec78;
        }
    }
    ctx->pc = 0x17ECECu;
}
