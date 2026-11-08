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

// Function: entry_0014dbf4
// Address: 0x14dbf4 - 0x14dc40
void entry_0014dbf4_0x14dbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dbf4_0x14dbf4");
#endif

    ctx->pc = 0x14dbf4u;

    // 0x14dbf4: 0x8c440114  lw          $a0, 0x114($v0)
    ctx->pc = 0x14dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x14dbf8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14DBF8u;
    {
        const bool branch_taken_0x14dbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBF8u;
        // 0x14dbfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbf8) {
            ctx->pc = 0x14DC40u;
            return;
        }
    }
    ctx->pc = 0x14DC00u;
    // 0x14dc00: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x14dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x14dc04: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14dc08: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14dc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14dc0c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14DC0Cu;
    {
        const bool branch_taken_0x14dc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dc0c) {
            ctx->pc = 0x14DC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DC0Cu;
            // 0x14dc10: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DC44u;
            return;
        }
    }
    ctx->pc = 0x14DC14u;
    // 0x14dc14: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x14dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x14dc18: 0x8c620c00  lw          $v0, 0xC00($v1)
    ctx->pc = 0x14dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3072)));
    // 0x14dc1c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x14dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x14dc20: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x14dc24: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DC24u;
    {
        const bool branch_taken_0x14dc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14dc24) {
            ctx->pc = 0x14DC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14DC24u;
            // 0x14dc28: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14DC44u;
            return;
        }
    }
    ctx->pc = 0x14DC2Cu;
    // 0x14dc2c: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14dc30: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14dc34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14dc38: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14dc3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14dc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14dc40u;
}
