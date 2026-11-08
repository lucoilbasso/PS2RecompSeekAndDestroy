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

// Function: entry_001c4478
// Address: 0x1c4478 - 0x1c44f0
void entry_001c4478_0x1c4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4478_0x1c4478");
#endif

    ctx->pc = 0x1c4478u;

label_1c4478:
    // 0x1c4478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c447c: 0x0  nop
    ctx->pc = 0x1c447cu;
    // NOP
    // 0x1c4480: 0x0  nop
    ctx->pc = 0x1c4480u;
    // NOP
    // 0x1c4484: 0x0  nop
    ctx->pc = 0x1c4484u;
    // NOP
    // 0x1c4488: 0x0  nop
    ctx->pc = 0x1c4488u;
    // NOP
    // 0x1c448c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C448Cu;
    {
        const bool branch_taken_0x1c448c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c448c) {
            ctx->pc = 0x1C4478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4478;
        }
    }
    ctx->pc = 0x1C4494u;
    // 0x1c4494: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C4494u;
    {
        const bool branch_taken_0x1c4494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4494u;
        // 0x1c4498: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4494) {
            ctx->pc = 0x1C44F0u;
            return;
        }
    }
    ctx->pc = 0x1C449Cu;
    // 0x1c449c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C449Cu;
    {
        const bool branch_taken_0x1c449c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C449Cu;
        // 0x1c44a0: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c449c) {
            ctx->pc = 0x1C44F4u;
            return;
        }
    }
    ctx->pc = 0x1C44A4u;
    // 0x1c44a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c44a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c44ac: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1c44acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1c44b0: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1c44b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x1c44b4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1c44b4u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 17));
    // 0x1c44b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c44bc: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1c44bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1c44c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c44c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c44c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c44c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c44c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c44cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c44ccu;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 2));
    // 0x1c44d0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1c44d0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 18));
    // 0x1c44d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c44d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c44d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c44dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c44dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c44e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44e4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x1c44e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1c44e8: 0x807109a  j           func_1C4268
    ctx->pc = 0x1C44E8u;
    ctx->pc = 0x1C44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44E8u;
    // 0x1c44ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4268u;
    setD4_CHCR_0x1c4268(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44F0u;
}
