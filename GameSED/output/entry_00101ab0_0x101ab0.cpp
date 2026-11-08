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

// Function: entry_00101ab0
// Address: 0x101ab0 - 0x101b10
void entry_00101ab0_0x101ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ab0_0x101ab0");
#endif

    ctx->pc = 0x101ab0u;

    // 0x101ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x101abc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x101ac0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x101ac4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101ac8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x101ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x101acc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101ad0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x101ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101ad4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x101ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x101ad8: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x101AD8u;
    {
        const bool branch_taken_0x101ad8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x101ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AD8u;
        // 0x101adc: 0x8c740044  lw          $s4, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ad8) {
            ctx->pc = 0x101B10u;
            return;
        }
    }
    ctx->pc = 0x101AE0u;
    // 0x101ae0: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x101ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101aec: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x101af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101af4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101af8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101afc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101b00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101b04: 0x804060c  j           func_101830
    ctx->pc = 0x101B04u;
    ctx->pc = 0x101B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B04u;
    // 0x101b08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101830u;
    Ap2DPanelLoadImageInfo__FP15BsSCDEntControlP10WImageInfo_0x101830(rdram, ctx, runtime); return;
    ctx->pc = 0x101B0Cu;
    // 0x101b0c: 0x0  nop
    ctx->pc = 0x101b0cu;
    // NOP
    ctx->pc = 0x101b10u;
}
