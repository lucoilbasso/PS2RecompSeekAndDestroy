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

// Function: entry_00127af4
// Address: 0x127af4 - 0x127b20
void entry_00127af4_0x127af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127af4_0x127af4");
#endif

    ctx->pc = 0x127af4u;

    // 0x127af4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x127AF4u;
    {
        const bool branch_taken_0x127af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AF4u;
        // 0x127af8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127af4) {
            ctx->pc = 0x127B40u;
            return;
        }
    }
    ctx->pc = 0x127AFCu;
    // 0x127afc: 0x278489e8  addiu       $a0, $gp, -0x7618
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
    // 0x127b00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x127b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127b04: 0xa62201b8  sh          $v0, 0x1B8($s1)
    ctx->pc = 0x127b04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x127b08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x127b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x127b0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x127b0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b10: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x127B10u;
    {
        const bool branch_taken_0x127b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x127B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B10u;
        // 0x127b14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b10) {
            ctx->pc = 0x127B44u;
            return;
        }
    }
    ctx->pc = 0x127B18u;
    // 0x127b18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x127B18u;
    {
        const bool branch_taken_0x127b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B18u;
        // 0x127b1c: 0xaf8089e8  sw          $zero, -0x7618($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b18) {
            ctx->pc = 0x127B44u;
            return;
        }
    }
    ctx->pc = 0x127B20u;
}
