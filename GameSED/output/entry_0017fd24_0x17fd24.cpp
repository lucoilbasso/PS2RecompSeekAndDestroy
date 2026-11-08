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

// Function: entry_0017fd24
// Address: 0x17fd24 - 0x17fd58
void entry_0017fd24_0x17fd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fd24_0x17fd24");
#endif

    ctx->pc = 0x17fd24u;

    // 0x17fd24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17fd28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17fd28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17fd30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17fd34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17fd38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17fd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17fd3c: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x17fd3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17fd40: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x17fd40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17fd44: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x17FD44u;
    {
        const bool branch_taken_0x17fd44 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD44u;
        // 0x17fd48: 0xa6130022  sh          $s3, 0x22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd44) {
            ctx->pc = 0x17FD74u;
            return;
        }
    }
    ctx->pc = 0x17FD4Cu;
    // 0x17fd4c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x17fd50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd54: 0x0  nop
    ctx->pc = 0x17fd54u;
    // NOP
    ctx->pc = 0x17fd58u;
}
