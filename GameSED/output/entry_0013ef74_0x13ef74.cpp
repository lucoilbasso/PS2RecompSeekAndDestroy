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

// Function: entry_0013ef74
// Address: 0x13ef74 - 0x13efd8
void entry_0013ef74_0x13ef74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ef74_0x13ef74");
#endif

    ctx->pc = 0x13ef74u;

    // 0x13ef74: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x13ef74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13ef78: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x13EF78u;
    {
        const bool branch_taken_0x13ef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef78) {
            ctx->pc = 0x13EF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EF78u;
            // 0x13ef7c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EFE4u;
            return;
        }
    }
    ctx->pc = 0x13EF80u;
    // 0x13ef80: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x13ef80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef84: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x13ef84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef88: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x13ef88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13ef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef90: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x13ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x13ef94: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x13ef94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef98: 0xa620000a  sh          $zero, 0xA($s1)
    ctx->pc = 0x13ef98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef9c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x13ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x13efa0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x13efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x13efa4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x13efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x13efa8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x13efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x13efac: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x13efacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x13efb0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x13efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x13efb4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x13efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x13efb8: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x13efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x13efbc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x13efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x13efc0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EFC0u;
    {
        const bool branch_taken_0x13efc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFC0u;
        // 0x13efc4: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efc0) {
            ctx->pc = 0x13EFD8u;
            return;
        }
    }
    ctx->pc = 0x13EFC8u;
    // 0x13efc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x13efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13efcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EFCCu;
    {
        const bool branch_taken_0x13efcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EFCCu;
        // 0x13efd0: 0xa6220008  sh          $v0, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efcc) {
            ctx->pc = 0x13EFDCu;
            return;
        }
    }
    ctx->pc = 0x13EFD4u;
    // 0x13efd4: 0x0  nop
    ctx->pc = 0x13efd4u;
    // NOP
    ctx->pc = 0x13efd8u;
}
